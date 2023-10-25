CC = gcc
SRC = 0-main.c 0-isupper.c 
OBJ = $(SRC:.c=.o)
NAME = 0-isuper
RM = rm
git = git add * && git commit -m '$(NAME)' && git push
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89


all: $(OBJ)
	$(CC)  $(CFLAGS) $(OBJ) -o $(NAME)
	./$(NAME)
	$(RM) -rf $(OBJ)  $(NAME)
	$(git)



.PHONY: clean oclean fclean re
	
clean:
	$(RM) -rf *~ $(NAME)

oclean:
	$(RM) -rf $(OBJ)

fclean:
	$(RM) -rf *~ $(NAME)
	$(RM) -rf $(OBJ)
re: oclean all