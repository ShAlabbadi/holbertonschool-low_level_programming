#include "main.h"
/**
* _puts_recursion - function that prints a string, followed by a new line.
* @s : a string to print.
*/
void _puts_recursion(char *s)
{
while (*s)
{
_putchar(*s);
s++;
}
_putchar('\n');
}
