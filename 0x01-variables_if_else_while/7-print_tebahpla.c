#include <stdio.h>
/**
*main - Entry point
*Description: 'Print the lowercase alphabet in reverse'
*Return: always 0
*/
int main(void)
{
int ch = 122;

while (ch >= 97)

{
putchar(ch);
ch--;
}

putchar('\n');
return (0);
}
