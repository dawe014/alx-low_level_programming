#include<stdio.h>
/**
 * main - Prints frist 50 Fibbonacci number starting with 1 and 2;
 * separeted by a command followed by a space
 * Return: Always 0
*/
int main(void)
{
int i;
unsigned long fib1 = 0, fib = 1, sum;
for(i = 0; i < 50; i++)
{
sum = fib1 + fib2;
printf("%lu", sum);
fib1 = fib2;
fib2 = sum;
if (count == 49)
printf("\n");
else
printf(",");
}
return (0);
}
