#include "main.h"
/**
* print_diagonal - function that draws a diagonal line on the terminal.
* @n : the number of spsce.
* Return: a '\' after n * space.
*/
void print_diagonal(int n)
{
int i = 0;      /* numbrr of line*/
int j;         /* number of space in a line*/

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
_putchar('\n');
}
