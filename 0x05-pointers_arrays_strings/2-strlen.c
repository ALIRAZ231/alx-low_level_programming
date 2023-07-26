#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the string to evaluate
 *
 * Description: a function that takes a pointer to a string as a parameter
 * and returns the length of the string
 * Return: int, the length of the string
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}

