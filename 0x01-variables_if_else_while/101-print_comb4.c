#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*Description: 'prints all possible combinations of of three-digit numbers'
*Return: always 0
*/
int main(void)
{

int a, d, p;
for (a = '0'; a < '8'; a++)
{
for (d = a + 1; d < '9'; d++)
{
for (p = d + 1; p <= '9'; p++)
{
if (p != d)
{
putchar(a);
putchar(d);
putchar(p);
if (a == '7' && d == '8' && p == '9')
continue;
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
