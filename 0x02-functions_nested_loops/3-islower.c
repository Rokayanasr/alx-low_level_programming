#include "main.h"

/**
* _isalpha - shows 1 if the input is a character. Another case shows 0.
* @c: a character in ascii code table
* Return: 1 for letters. 0 for the rest
*/

int _islower(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');

}
