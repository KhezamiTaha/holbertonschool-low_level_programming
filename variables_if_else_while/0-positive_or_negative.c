#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
   * main- Short description, single line
    * @i: Description of parameter x
    *
     * Description: Longer description of the function)?
      *section header: Section description
      * Return: Description of the returned value
*/

int main(void)
{
/**
 * main descriptions
 */
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
