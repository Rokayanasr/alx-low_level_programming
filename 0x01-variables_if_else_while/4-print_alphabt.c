#include <stdio.h>
/**
*main - Entry point
*Description: 'Print alphabets lowercase except q and e'
*Return: always 0
*/
int main(void)
{
int ch;

for (ch = 97; ch <= 122; ch++)
{
if (ch == 101 || ch == 113)
continue;
putchar(ch);
}

putchar ('\n');
return (0);
}
