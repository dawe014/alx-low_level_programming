#include<stdio.h>
/**
 *  * main - Entry of point
 *   * Return: Always 0 (success)
*/
int main(void)
{
int a;
int b;
int c;
int d;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 9; b++)
{
for (c = 0; c < 10; c++)
{
for (d = 1; d < 10; d++)
{
putchar('0' + a);
putchar('0' + b);
putchar(' ');
putchar('0' + c);
putchar('0' + d);
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
