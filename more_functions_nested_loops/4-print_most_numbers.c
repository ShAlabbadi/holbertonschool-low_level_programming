#include "main.h"
/**
* print_most_numbers - function that prints the numbers,0 to 9, except 2 and 4.
* Return: 0.
*/
void print_most_numbers(void)
{
int i = 0;
while (i < 10)
{
if ((i == 2) || (i == 4))
i++;

_putchar(i + '0');
i++;
}
_putchar('\n');
}
