#include"main.h"
/**
 * _isalpha - cheks for alphabetic character
 * @c: the character tobe checked
 * Rerurn: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >='A' && c <= 'Z'));
}
