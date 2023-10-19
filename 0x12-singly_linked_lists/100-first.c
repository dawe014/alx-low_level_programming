#include<stdio.h>
/**
 * my_constructor - Constructor function to print a message before main.
 *
 * This function is marked with a GCC-specific constructor attribute,
 * which ensures it is executed before the main function.
 */
void my_constructor(void) __attribute__((constructor));

void my_constructor(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
