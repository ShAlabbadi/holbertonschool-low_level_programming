#include "main.h"
/**
* print_diagonal - function that draws a straight line in the terminal.
* @n : the number of spsce.
* Return: a '\' after n * space.
*/
void print_diagonal(int n)
{
int i = 0;      /* numbrr of line*/
int j;         /* number of space in a line*/


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
