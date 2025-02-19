#include "main.h"
/**
* print_alphabet - prints the alphabet in lowercase X10,followed by a new line.
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char a = 'a';
int x = 10;
while (x != 0)
{
while (a <= 'z')
{
_putchar(a);
a++;
}
x--;
}
_putchar('\n');
}
