#include "main.h"
/**
* reverse_array - a function that reverses the content of an array of integers.
* @a: the array.
* @n: the number of elements of the array.
*/
void reverse_array(int *a, int n)
{
int  i, tmp;

for (i = n - 1 ; i > n / 2; i--)
{
tmp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = tmp;
}

}
