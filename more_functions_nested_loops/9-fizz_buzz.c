#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;

for (n = 1; n <= 100; n++)
{
if ((n % 3 == 0) && (n % 5 == 0))
{
printf("%s", "FizzBuzz");
putchar(' ');
}
else if (n % 3 == 0)
{
printf("%s", "Fizz");
putchar(' ');
}
else if (n % 5 == 0)
{
printf("%s", "Buzz");
putchar(' ');
}
else
printf("%d", n);
putchar(' ');
}
putchar('\n');
return (0);
}
