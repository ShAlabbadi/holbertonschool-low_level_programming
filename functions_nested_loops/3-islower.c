#include "main.h"
/**
* _islower - function checks c is lowercase .
* @c : the character the function checks .
* Return: 1 or 0 .
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);
}
