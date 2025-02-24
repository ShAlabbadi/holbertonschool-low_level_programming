#include "main.h"
/**
* more_numbers - function that prints 10 times the numbers, from 0 to 14 .
* Return: 0.
*/
void more_numbers(void)
{
int i = 0, n;

while (i < 10)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
i++;
_putchar('\n');
}
}
