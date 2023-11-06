#include "main.h"

/**
 *print_chessboard - Algorithms function
 *@a: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		if (i > 0)
			printf("\n");
		for (j = 0; j < 8; j++)
			printf("%c", a[i][j]);
	}
	printf("\n");
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
