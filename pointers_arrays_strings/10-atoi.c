#include "main.h"

/**
 *_atoi - Algorithms function
 *@s: array pointer
 *
 *Return: 1 or 0
 */
int _atoi(char *s)
{
	int i = 0;
	int len = 0;
	int nb = 0;
	int first = 0;

	while (1)
	{
		if (isdigit(*(s + i)))
		{

			if (first == 0)
				first = i;

			if (*(s + first - 1) == '-')
			{

				len = len + 1;

				nb = (nb * 10) - ((*(s + i) - 48));
			}
			else
			{
				len = len + 1;

				nb = ((nb * 10) + (*(s + i) - 48));
			}
		}
		else if ((len != 0) && !(isdigit(*(s + i))))
			break;
		i++;
	}
	return (nb);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
