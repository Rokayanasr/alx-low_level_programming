#include "main.h"

/**
*main - Entry point
*Description:'prints the alphabet in lowercase using _putchar'
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
