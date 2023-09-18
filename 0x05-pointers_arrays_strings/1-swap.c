#include"main.h"
/**
 * swap_int - Swap the the values of a and b
 * @a: Its value changed to the value of b
 * @b: Its value changed to the value of a
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
