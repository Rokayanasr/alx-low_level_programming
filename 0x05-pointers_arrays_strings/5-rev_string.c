#include "main.h"

/**
 * rev_string - prints , reverse a string.
 * @s: the string.
 */
void rev_string(char *s)
{
int len = 0;
int i;
char c;

while (s[len] != '\0')
len++;

for (i = 0; i < len / 2; i++)
{
c = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = c;
}
}
