#include "main.h"
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
int main(void)
{
char str[] = "hello, world!";
int len = _strlen(str);
printf("the length of a string is : %d\n", len);
return (0);
}
