#include"main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("%s", "Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", i);
		}
		
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}

