#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - a function that prints a name.
* @name : a name to print.
*/
void print_name(char *name, void (*f)(char *))
{
while (name == NULL || f == NULL)
return;


f(name);
}
