#include "main.h"
#include <stddef.h>

/**
* _strchr - copy n bytes from memory area to another.
* @s: pointer to destination memory area.
* @c: pointer to source.
* Return: s if c exists , null if c doesn't exist.
*/

char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
