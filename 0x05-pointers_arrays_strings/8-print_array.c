#include "main.h"
#include <stdio.h>
/**
 * print_array - Print array of integer
 * @a: The array of integer
 * @n: Size of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
