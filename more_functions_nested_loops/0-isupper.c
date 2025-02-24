#include "main.h"
/**
* _isupper - function that checks for uppercase character.
* @c : the charecter that the function will checks.
* Return: 1 if 'c' is upper , 0 if it's not.
*/
int _isupper(int c)
{
if (c >= 'a' && c <= 'z')
return 0;

else if (c >= 'A' && c <= 'Z')
return 1;
}
