#include "main.h"
#include <stdio.h>

/**
* puts_half - prints the second half of a string
* @str: the string to print
*/
void puts_half(char *str)
{
int len = 0;
int i, beg;

while (str[len] != '\0')
len++;

beg = len / 2;
if (len % 2 != 0)
beg++;

for (i = beg; i < len; i++)
_putchar(str[i]);

_putchar('\n');
}
