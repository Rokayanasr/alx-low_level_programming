#include "main.h"

/**
* _islower - checks for lower case characters.
* @c: a character in ascii code table
* Return: 1 for lowercase. 0 dor the rest
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
