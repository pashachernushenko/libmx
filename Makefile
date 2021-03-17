#directories
IDIR = inc
ODIR = obj
SDIR = src
#compiler settings
CC=clang
CFLAGS=-I $(IDIR)
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
	@mkdir -p obj
	@printf "\33[2KCompiling \33[0;32m$<\33[m\r"
	@$(CC) -c -o $@ $< $(CCFLAGS)
#make library
$(NAME): $(OBJS)
	@printf "\r\33[2KLinking library... \33[0;33m$@\33[m"
	@ar -rc $@ $^
	@printf "\r\33[2KSuccesfully linked \33[0;32m$@\33[m. Enjoy!\n"
#executable for tests
$(TEST): $(NAME)
	@printf "\r\33[2KCompiling test cases... \33[0;33m$@\33[m"
	$(CC) -o $@ $< $(CCFLAGS) $(SDIR)/$(TEST).c
	@printf "\r\33[2K\33[0;32mTests compiled succesfully!\33[m\n"

.PHONY: clean uninstall reinstall
#delete all files
uninstall: clean
	@printf "\r\33[2K\33[0;33mUninstalling library...\33[m\n"
	@rm -f $(NAME) $(TEST)
#remove all temporary files
clean:
	@printf "\r\33[2K\33[0;33mRemoving temporary files...\33[m\n"
	@rm -rf $(ODIR)
	@rm -f *.a
#rebuild project
reinstall: uninstall all
