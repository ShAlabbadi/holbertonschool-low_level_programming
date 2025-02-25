#include "main.h"
/**
* print_triangle - function that prints a triangle, followed by a new line.
* @size : the size of the triangle.
* Return: a '\' after n * space.
*/
void print_triangle(int size)
{
int i, j;

if (size > 0)
{
for (i = 1; i <= size; i++)/* to print # */
{
for ((j = size - i); j > 0; j--)/*to print the spase on the start of a line*/
_putchar(' ');

for (j = 0; j < i; j++)/* to print # in the same row */
_putchar(35);

_putchar('\n');

if (i == size)
continue;
}

}
else
_putchar('\n');
}
