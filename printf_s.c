#include "main.h"

/**
 * printf_s - prints a string
 * @args: arguments
 * Return: (Number of characters printed)
 */
int printf_s(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}
