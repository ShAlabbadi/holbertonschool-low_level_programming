#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet 10 times,followed by a new line.
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
char a;
int x;

while (x < 10)
{
a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
x++;
_putchar('\n');
}
}
