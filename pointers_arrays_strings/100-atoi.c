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
	int sign = 1;

	while (*(s + i) != '\0')
	{

		if (isdigit(*(s + i)))
		{

			if (sign == -1)
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
			sign *= -1;
		else if ((len != 0) && !(isdigit(*(s + i))))
			break;
		i++;
	}
	return (nb);
}
