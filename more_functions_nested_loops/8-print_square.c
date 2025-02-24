#include "main.h"
/**
* print_square - function that prints a square, followed by a new line.
* @size : the number of rows and columns.
* Return: a print the square made of '#'.
*/
void print_square(int size)
{
int r;
int c;

if (size > 0)
{
for (r = 0; r < size; r++)
{
for (c = 0; c < size; c++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
