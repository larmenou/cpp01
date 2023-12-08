CPP			:= c++
CPPFLAGS	:= -g -Wall -Wextra -Werror -std=c++98

NAME		:= sed

SRCS_F		:= 	main \
				myReplace

SRCS		:= $(addsuffix .cpp, $(SRCS_F))
OBJ			:= $(addsuffix .o, $(SRCS_F))

all: 		$(NAME)

$(NAME): 	$(OBJ)
				$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
				@rm -f $(OBJ)
				@rm -f $(wildcard *.replace)

fclean:		clean
				@rm -f $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re