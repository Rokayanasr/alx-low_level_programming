#include <stdio.h>
/**
*_strlen - compute the length of a string.
*@s: string
*@len: length of the character
*@*s: pointer
*Return : length
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
