#include <unistd.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 1 (Error code)
 */
int main(void)
{
char *m = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = 0;
while (m[len] != '\0')
{
len++;
}
if (write(STDERR_FILENO, m, len) != len)
{
return (1);
}
return (1);
}
