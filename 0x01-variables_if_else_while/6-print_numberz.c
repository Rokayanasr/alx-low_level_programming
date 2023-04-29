#include <stdio.h>
/**
*main - Entry point
*Description: 'Print numbers of base 10 using putchart'
*Return: always 0
*/
int main(void)
{
int ch = 0;

while (ch < 10)

{
putchar(ch + 48);
ch++;
}

printf("\n");
return (0);
}
