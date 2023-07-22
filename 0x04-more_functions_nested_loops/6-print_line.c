#include "main.h"

/**
* print_line - draws a straight line in the terminal.
* @n: The number of underscore (_) characters to be printed.
*
* Return: nothing
*/
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}

