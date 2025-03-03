#include "main.h"
#include <stddef.h>
/**
* _strstr - function that locates a substring.
* @haystack: the original string.
* @needle: the substring.
* Return: pointer to the beginning of the located substring,
*             or NULL if the substring is not found.
**/
char *_strstr(char *haystack, char *needle)
{
int i, s = 0;

while (needle[s] != '\0')
s++;

while (*haystack)
{
for (i = 0; needle[i]; i++)
{
if (haystack[i] != needle[i])
	break;
}
if (i != s)
haystack++;
else
return (haystack);
}
return (NULL);
}
