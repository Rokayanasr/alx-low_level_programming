#include "main.h"

/**
*main - Entry point
*Description: 'print alphabet, in lowercase using _putchar function'
*print_alphabet: is a function to print alphabet
*Return: always 0
*/

void print_alphabet(void)
{
int a;

for (a = 97; a <= 122; a++)
{
_putchar(a);
}
_putchar('\n');
}
