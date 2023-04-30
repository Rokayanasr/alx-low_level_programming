#include "main.h"

/**
* _isalpha - checks if c is an alphabet.
* Return: 1 for letters. 0 for the else
* @c: is a letter in ascii code table
*/

int _isalpha(int c)
{

if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');

}
