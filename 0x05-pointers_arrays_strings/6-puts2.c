#include "main.h"

/**
* puts2 - prints every other character of a string.
* @str: a string
*
* Return: void
*/
void puts2(char *str)
{
int r = 0;

while (str[r] != '\0')
{
_putchar(str[r]);
r += 2;
}

_putchar('\n');
}
