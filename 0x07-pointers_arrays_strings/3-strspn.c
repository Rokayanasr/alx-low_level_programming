#include "main.h"

/**
* _strspn - copy n bytes from memory area to another.
* @s: pointer to destination memory area.
* @accept: pointer to source.
* Return: s if c exists , null if c doesn't exist.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
if (s[i] == accept[j])
{
break;
}
if (accept[j] != '\0')
{
break;
}
}
return (i);
}
