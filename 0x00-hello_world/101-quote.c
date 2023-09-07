#include <unistd.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 1 (Error code)
 */
int main(void)
{
const char *message = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";
ssize_t len = 0;
while (message[len] != '\0')
{
len++;
}
if (write(STDERR_FILENO, message, len) != len)
{
return (1);
}
return (1);
}
