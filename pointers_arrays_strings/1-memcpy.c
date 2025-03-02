#include "main.h"
/**
* _memcpy - function that copies memory area.
* @dest: the memory area to save the copy in (Destination).
* @src: the memory area to copy from (Source).
* @n: the number of bytes from memory area.
* Return: pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
