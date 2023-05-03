#include "main.h"
#include <stdio.h>

/**
* _puts - print a string with a new line.
* @str: a pointer
* Return: nothing.
*/

void _puts(char *str)
{
int R = 0;
while (str[R] != '\0')
{
_putchar(str[R]);
R++;
}
_putchar('\n');
}
