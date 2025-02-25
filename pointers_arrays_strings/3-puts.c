#include "main.h"

/**
* _puts - Write a function that prints a string,followed by \n,to stdout.
* @str: This is a string
*/
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
