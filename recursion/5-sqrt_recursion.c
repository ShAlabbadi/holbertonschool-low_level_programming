#include "main.h"
/**
* _sqrt_recursion - function that returns the natural square root of a number.
* @n : a number.
* Return: If n does not have a natural square root, the function return -1.
*/
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}


/**
* _sqrt - _sqrt_recursion
* @n: integer paramtr
* @i: integer parameter
* Return: sqrt
*/
int _sqrt(int n, int i)
{
if (n < 0)
	return (-1);
if ((i * i) > n)
	return (-1);
if (i * i == n)
	return (i);
return (_sqrt(n, i + 1));
}
