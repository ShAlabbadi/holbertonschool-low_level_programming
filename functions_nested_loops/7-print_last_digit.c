#include "main.h"
/**
* print_last_digit - function that print last digit of a number.
* @r : the number.
* Return: 0
*/
int print_last_digit(int r)
{
int LD = r % 10;
if (LD < 0)
LD = LD * -1;
_putchar (LD + '0');
return (0);
}
