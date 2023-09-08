#include<stdio.h>
/**
 * main - Entry of point
 * Return: Always 0 (success)
*/
int main(void)
{
char c;
int n;
for (n = 0; n < 10; n++)
{
putchar('0' + n);
}
for (c = 'a'; c < 'g'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
