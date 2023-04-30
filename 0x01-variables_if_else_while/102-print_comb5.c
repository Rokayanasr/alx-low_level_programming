#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*Description: 'prints all possible combinations of single-digit numbers'
*Return: always 0
*/
int main(void)
{

int d, p;

for (d = 0; d <= 98; d++)
{
for (p = d + 1; p <= 99; p++)
{
putchar((d / 10) + '0');
putchar((d % 10) + '0');
putchar(' ');
putchar((p / 10) + '0');
putchar((p % 10) + '0');
if (d == 98 && p == 99)
continue;
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
