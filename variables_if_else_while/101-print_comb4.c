#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num0;
int num1;
int num2;
for (num0 = 0; num0 <= 7; num0++)
{
for (num1 = num0 + 1 ; num1 <= 8; num1++)
{
for (num2 = num1 + 1 ; num2 <= 9; num2++)
{
putchar(num0 + '0');
putchar(num1 + '0');
putchar(num2 + '0');
if (num0 == 7 && num1 == 8 && num2 == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
