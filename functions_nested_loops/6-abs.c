#include "main.h"
/*
* _abs - function that computes the absolute value of an integer.
* @r : the integer that computes the absolute value on.
* Return: 0
*/
int _abs(int r)
{
if (r > 0)
{
return (r);
}
else if (r < 0)
{
r = r * -1;
return (r);
}
else
{
return (0);
}
}
