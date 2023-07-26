#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to print
 *
 * Description: a function that takes a pointer to a string as a parameter
 * and prints the string, followed by a new line, to stdout
 * Return: void
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
