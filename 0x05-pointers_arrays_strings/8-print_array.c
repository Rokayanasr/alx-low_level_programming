#include <stdio.h>
/**
* print_array - prints the array value.
* @n: integer.
* @a: array name
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}

printf("\n");
}
