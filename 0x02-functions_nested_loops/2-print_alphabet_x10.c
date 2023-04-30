#include "main.h"

/**
* main - Entry point
* print_alphabet_x10 - make alphabets 10 time
* Return: always 0
*/

void print_alphabet_x10(void)
{
int a;
int b;
for (a = 1; b <= 10; b++)
{
for (a = 97; a <= 122; a++)
{
_putchar(97);
}
_putchar('\n');
}
}
