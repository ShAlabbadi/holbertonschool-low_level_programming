#include "main.h"
/**
* rev_string - function that reverses a string.
* @s : a string.
*/
void rev_string(char *s)
{
int count = 0, i = 0;
char tmp;

while (s[i++])
count++;

for (i = count - 1; i >= count / 2; i--)
{
tmp = s[i];
s[i] = s[count - i - 1];
s[count - i - 1] = tmp;
}
}
