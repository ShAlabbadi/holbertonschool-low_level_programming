#include "main.h"

char *_strcat(char *dest, char *src)
{
int dest_len;
int i;

for (i = 0 ; src[i] != '\0'; i++)
dest_len = i;

for (i = 0 ; src[i] != '\0' ; i++)
dest[dest_len++] = src[i];


return dest;
}
