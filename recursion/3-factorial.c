#include "main.h"
/**
* factorial - a function that returns the factorial of a given number.
* @n : the given number.
* Return: If n is lower than 0 return -1 , else return factorial.
*/
int factorial(int n)
{
if (n < 0)
	return (-1);

if (n <= 1)
	return (1);

return (n * factorial(n - 1));
}
