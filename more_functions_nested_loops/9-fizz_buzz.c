#include <stdio.h>

/**
 *fizz_buzz - Algorithms function
 *@: integer
 *
 *Return: 1 or 0
 */
void fizz_buzz(void)
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

}

/**
 * To-Do :  Variables Description
 *          Formt document
 */ 
