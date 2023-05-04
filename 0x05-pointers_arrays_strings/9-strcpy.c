#include "main.h"
/**
* _strcpy - Copies the string pointed to by src.
*
* @dest: copy string destination.
* @src: the string source to be copied.
*
* Return: a pointer to the destination string dest.
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}
