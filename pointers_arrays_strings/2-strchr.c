#include "main.h"
#include <stddef.h>
/**
* _strchr -  function that locates a character in a string.
* @s : a string to search in.
* @c : a located charcter.
* Return: 'c' if character is found , if else return null.
*/
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
	return (s);
else
	s++;
}

if (c != '\0')
	return (s);

return (NULL);
}
