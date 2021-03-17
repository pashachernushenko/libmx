#directories
IDIR = inc
ODIR = obj
SDIR = src
#compiler settings
CC=clang
CFLAGS=-I $(IDIR)
#set -std=c11 for general purposes, and -std=gnu99 for ubuntu 20
CCFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -I $(IDIR)
#dependencies
NAME = libmx.a
TEST = test
#headers
_DEPS = libmx.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))
#sources
SRCS := $(wildcard $(SDIR)/mx_*.c)
#objects
_OBJS = $(SRCS:.c=.o)
OBJS = $(subst $(SDIR),$(ODIR),$(_OBJS))

all: $(NAME)

#make objects
$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	mkdir -p obj
	$(CC) -c -o $@ $< $(CCFLAGS)
#make library
$(NAME): $(OBJS)
	ar -rc $@ $^
#executable for tests
$(TEST): $(NAME)
	$(CC) -o $@ $< $(CCFLAGS) $(SDIR)/$(TEST).c

.PHONY: clean uninstall reinstall
#delete all files
uninstall: clean
	rm -f $(NAME) $(TEST)
#remove all temporary files
clean:
	rm -rf $(ODIR)
	rm -f *.a
#rebuild project
reinstall: uninstall all
