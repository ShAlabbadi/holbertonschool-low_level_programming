#include "main.h"
/**
* _strcpy - a function that copies the string pointed to by src, including the
* terminating null byte (\0), to the buffer pointed to by dest.
* @dest : the origenal string.
* @src : the copies the string.
* Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
char *cp = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (cp);
}
