#include "main.h"
/**
* _strlen - compute the length of a string.
* @s: is a string
* Return: the length of the string.
*/

int _strlen(char *s)
{
int len = 0;

while (*s != '\0')

{
len++;
s++;
}
return (len);
}
