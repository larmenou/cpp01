CPP			:= c++
CFLAGS		:= -g -Wall -Wextra -Werror -std=c++98

NAME		:= zombie

SRCS_F		:= 	main \
				Zombie \
				zombieHorde

SRCS		:= $(addsuffix .cpp, $(SRCS_F))
OBJ			:= $(addsuffix .o, $(SRCS_F))

all: 		$(NAME)

$(NAME): 	$(OBJ)
				$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
				@rm -f $(OBJ)

fclean:		clean
				@rm -f $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re