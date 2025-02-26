#include "main.h"
/**
 * _atoi -  function that convert a string to an integer.
 * @s : string
 * Return: output.
 */
int _atoi(char *s)
{
int sign = 1, output;
unsigned int num = 0;
char *temp = s;


while (*temp != '\0' && (*temp < '0' || *temp > '9'))
{
if (*temp == '-')
sign *= -1;
temp++;
}

if (*temp != '\0')
{
do {
num = num * 10 + (*temp - '0');
temp++;
} while (*temp >= '0' && *temp <= '9');
}
output = num *sign;

return (output);
}
