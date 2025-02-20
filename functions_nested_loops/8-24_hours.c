#include "main.h"
/**
* jack_bauer - function that prints every minute of the day of Jack Bauer.
*
* Return : 0
*/
void jack_bauer(void)
{
/* Hh :Mm */
int H, h, M, m;
for (H = 0; H <= 2; H++)
{
for (h = 0; h <= 9; h++)
{
if ((H <= 1 && h <= 9) || (H <= 2 && h <= 3))
{
for (M = 0; M <= 5; M++)
{
for (m = 0; m <= 9; m++)
{
_putchar(H + '0');
_putchar(h + '0');
_putchar(':');
_putchar(M + '0');
_putchar(m + '0');
_putchar('\n');
}
}
}
}
}
}
