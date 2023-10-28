#include <stdio.h>

/**
 *main - Algorithms function
 *@: integer
 *
 *Return: 1 or 0
 */
int main(void)
{
	int counter;
	
	for (counter = 1; counter <= 100; counter++)
    {
		if (counter % 15 == 0)
			printf("FizzBuzz ");
		else if (counter % 5 == 0)
			printf("Buzz ");
		else if (counter % 3 == 0)
		 	printf("Fizz ");
		else
		printf("%d ", counter);
	}
	printf("\n");
	return (0);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */ 
