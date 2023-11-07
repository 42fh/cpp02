#CPPC is short for CPP Compiler
CPPC=c++
NAME=prg
SRCS=main.cpp Fixed.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CPPC) -Wall -Wextra -Werror -std=c++98 $(SRCS) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean
	make all

.PHONY: all clean fclean re
