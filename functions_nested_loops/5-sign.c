#include "main.h"
/**
*print_sign - function that prints the sign of a number.
*@n : the number that the function checks.
*Return: 1 or 0 0r -1
*/
int print_sign(int n);
{
if (n >= 0)
_putchar('+');
return (1);
if (n == 0)
_putchar('0');
return (0);
else
_putchar('-');
return (-1);
}
