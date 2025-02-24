#include "main.h"
/**
* _isdigit - a function that checks for a digit (0 through 9).
* @c : the char that the function checks.
* Return: 1 if 'c' is a digit 0 if it is not.
*/
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}

