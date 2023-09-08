#include<stdio.h>
/**
 * main - Entry of point
 * Return: Always 0 (success)
*/
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar('0' + n);
if (n < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
