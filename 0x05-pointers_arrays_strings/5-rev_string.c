#include "main.h"

/**
* rev_string - Reverses a string
* @s: The string to reverse
*
* Return: Nothing
*/
void rev_string(char *s)
{
int len = 0, i = 0;
char temp;

while (s[i] != '\0')
{
len++;
i++;
}

for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}

