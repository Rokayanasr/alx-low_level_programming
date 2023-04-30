#include <stdio.h>
/**
*main - Entry point
*Description: 'prints all possible combinations of single-digit numbers'
*Return: always 0
*/
int main(void)
{
int n = 48;


while (n < 58)
{
putchar(n);
n++;

if (n == 58)
{
continue;
}
putchar(44);
putchar(32);
}

putchar('\n');
return (0);
}
