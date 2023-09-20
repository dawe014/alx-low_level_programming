#include"main.h"
/**
 * reverse_array - Reverse the content of array of integer
 * @a: array of string to be reversed
 * @n: size of array of string
*/
void reverse_array(int *a, int n)
{
int temp, i, j;

for ( i = 0, j = n - 1; i < j; i++, j--)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}