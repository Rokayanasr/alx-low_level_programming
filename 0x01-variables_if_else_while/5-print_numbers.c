#include <stdio.h>
/**
*main - Entry point
*Description: 'Print numbers of base 10'
*Return: always 0
*/
int main(void)
{
int digit = 0;

while (digit < 10)
{
printf("%d", digit);
digit++;
}
printf("\n");
return (0);
}
