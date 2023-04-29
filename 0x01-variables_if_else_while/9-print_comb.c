#include <stdio.h>
/**
*main - Entry point
*Description: 'prints all possible combinations of single-digit numbers'
*Return: always 0
*/
int main(void)
{
int n = 48;

while (n <= 57)
{
putchar(n);
putchar(44);
putchar(32);
n++;
}

putchar('\n');
return (0);
}
