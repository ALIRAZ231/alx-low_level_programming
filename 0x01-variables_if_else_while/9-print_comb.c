#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * in ascending order, separated by commas.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;

for (number = 0; number < 10; number++)
{
putchar(number + '0');

if (number != 9)
{
putchar(',');
}
}

putchar('\n');

return (0);
}

