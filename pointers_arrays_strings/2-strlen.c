#include "main.h"
/**
* _strlen - function that returns the length of a string.
* @s : a string.
* Return: length of s.
*/
int _strlen(char *s)
{
int i = 0;

for (i = 0; s[i] != '\0'; i++)
;
return (i);
}
