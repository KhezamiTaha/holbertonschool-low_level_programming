
Function_file =   3-op_functions.c
Main_file =  3-main.c
NAME = func
Function_name =  int int_index(int *array, int size, int (*cmp)(int));


Header = 3-calc.h
Directory = structures_typedef






CC = gcc
Function_file_final =   '$(Function_file)' | tr -d '0123456789-.'  
SRC =    $(Main_file) $(Function_file)  3-get_op_func.c
OBJ = $(SRC:.c=.o)
RM = rm
git = git add * && git commit -m '$(NAME)' && git push
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89  
Final_header = \#include \"$(Header)\"
ReadMe = README.md


all: $(OBJ)
	$(CC)  $(CFLAGS)   $(OBJ) -o  $(NAME)
	betty    $(Main_file) $(Function_file) 
	./$(NAME) 5 % 1
	$(RM) -rf $(OBJ)
	



.PHONY: clean oclean fclean re brk  echo valgrind folder

clean:
	$(RM) -rf *~  $(NAME)

oclean:
	$(RM) -rf $(OBJ) 

fclean:
	$(RM) -rf *~  $(NAME)
	$(RM) -rf $(OBJ)
	rm $(SRC)
re: oclean  all

folder:
	mkdir $(Directory)
	cd $(Directory)
	touch $(ReadMe)

git:
	$(git)

echo:
	
	echo  $(NAME)

valgrind:
	valgrind ./$(NAME)

brk:
	touch $(SRC) 
	grep -v '#endif' $(Header) > temp_file && mv temp_file $(Header)
	echo  "$(Function_name)"  >> "$(Header)"
	echo  "#endif"  >> "$(Header)"

	echo "$(Final_header)" >> "$(Function_file)"
	echo      ""            >> "$(Function_file)"
	echo  "/**"               >> "$(Function_file)"
	echo    " *"            >> "$(Function_file)"
	echo     $(Function_file_final)            >> "$(Function_file)"
	echo    " - Algorithms function"            >> "$(Function_file)"
	echo  " *@: pointer"              >> "$(Function_file)"
	echo  " *@: pointer"              >> "$(Function_file)"
	echo  " *"            >> "$(Function_file)"
	echo  " *Return: 1 or 0"             >> "$(Function_file)"
	echo  " */"            >> "$(Function_file)"
	echo      ""            >> "$(Function_file)"
	echo      ""            >> "$(Function_file)"
	echo      ""            >> "$(Function_file)"
	echo  "/**"   >> "$(Function_file)"
	echo  " * To-Do :  Variables Description"   >> "$(Function_file)"
	echo  " *          Formt document"   >> "$(Function_file)"
	echo  " */"   >> "$(Function_file)"