#include "main.h"

/**
* _memcpy - copy n bytes from memory area to another.
* @dest: pointer to destination memory area.
* @src: pointer to source.
* @n: number of bytes.
* Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
