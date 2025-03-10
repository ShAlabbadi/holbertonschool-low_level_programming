#include "main.h"
#include <stdlib.h>
/**
* create_array - create array of size size and assign char c
* @size: size of array
* @c: char to assign
* Return: pointer to array, NULL if fail
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

array = malloc(sizeof(char) * size);

if (array == NULL || size == 0)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
