#include <stdio.h>
/**
*_strlen - returns the length of a string.
*str: an integer from the ascii key
*Return : length
*/

int _strlen(char *s)
{
  
int length = 0;

while (*s != '\0')
length++;
s++;

return (length);
}
