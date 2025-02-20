#include "main.h"
/**
* print_last_digit - function that print last digit of a number.
* @n : the number.
* Return: 0
*/
int print_last_digit(int n)
{
int LD = n % 10;
if (LD < 0)
{
LD = LD * -1;
}
_putchar (LD + '0');
return (LD);
}
