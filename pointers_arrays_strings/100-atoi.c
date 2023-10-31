#include "main.h"
/**
 *_atoi - Algorithms function
 *@s: array pointer
 *
 *Return: 1 or 0
 */
int _atoi(char *s)
{
	int i = 0, len = 0, nb = 0;
	int plus = 0, minus = 0;

	while (1)
	{

		if (isdigit(*(s + i)))
		{

			if (minus > plus)
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
		else if (*(s + i) == '-')
			minus = minus + 1;
		else if (*(s + i) == '+')
			plus = plus + 1;
		else if ((len != 0) && !(isdigit(*(s + i))))
			break;
		i++;
	}
	return (nb);
}
