#include "main.h"

/**
* print_alphabet_x10 - Prints alphabets 10 time.
* Return: always 0 (success)
*/

void print_alphabet_x10(void)
{
int a;
int b;
for (b = 1; b <= 10; b++)
{
for (a = 97; a <= 122; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
