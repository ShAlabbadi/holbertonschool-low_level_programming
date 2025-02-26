#include "main.h"
/**
*
*
* Return: dest.
*/
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int i;

for (i = 0 ; src[i] != '\0'; i++)
dest_len++;

for (i = 0 ; src[i] != '\0' ; i++)
dest[dest_len++] = src[i];


return dest;
}
