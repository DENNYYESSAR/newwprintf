#include "main.h"

/**
 * print_revs - Prints a string in reverse.
 * @args: A struct va_arg where printf arguments are allocated.
 *
 * Return: The length of the reversed string.
 */
int print_revs(va_list args)
{
	char *s = va_arg(args, char*);
	int i, j = 0;

	if (s == NULL)
		s = "(null)";

	while (s[j] != '\0')
		j++;

	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);

	return (j);
}
