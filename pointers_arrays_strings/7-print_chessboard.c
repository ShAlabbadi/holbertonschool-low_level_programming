#include "main.h"
/**
* print_chessboard - a function that prints the chessboard.
* @a : an array to be printed.
*/
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0 ; i <= 7 ; i++)
{
for (j = 0 ; j <= 7 ; j++)
{
	if (j == 7)
	/* to print new line only after the last line of the array*/
	{
	_putchar(a[i][j]);
	_putchar('\n');
	}

	else
	_putchar(a[i][j]);
}
}
}
