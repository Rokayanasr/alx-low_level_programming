#include "main.h"

/**
* print_sign - checks the sign of the number.
* @n: the input number as an integer refers to the ascii table.
* Return: 1 if n > 0. -1 if n < 0 return. 0 if n = 0.
*/

int print_sign(int n)
{

if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
_putchar('\n');

}
