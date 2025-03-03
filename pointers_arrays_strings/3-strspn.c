#include "main.h"
/**
* _strspn - function that gets the length of a prefix substring.
* @s: a string to search for in @accept.
* @accept: the string to be scanned.
* Return: the number of bytes in the initial segment of s (count).
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, count = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32) /* if it is not a space */
{
for (j = 0; accept[j] != '\0'; j++)
{
	if (s[i] == accept[j])
	count++;
}
}
else
return (count);
}

return (count);
}
