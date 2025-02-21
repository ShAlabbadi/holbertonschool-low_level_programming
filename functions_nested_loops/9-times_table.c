#include "main.h"
/**
* times_table - function that prints the 9 times table, starting with 0.
* Return : 0
*/
void times_table(void)
{
int num1, num2, x;

for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 0; num2 <= 9; num2++)
{
x = num1 * num2;

if (x <= 9)
{
_putchar((x % 10) + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else 
{
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
