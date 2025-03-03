#include "main.h"
#include <stddef.h>
/**
* _strpbrk - a function that searches a string for any of a set of bytes.
* @accept : a string to search in.
* @s : a located charcter.
* Return: pointer to the byte in s that matches one of the bytes in accept,
*                         if else return null.
*/
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
