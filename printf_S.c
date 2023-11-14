#include "main.h"

/**
 * printf_S - prints a string
 * @args: arguments
 * Return: (Number of characters printed)
 */
int printf_S(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}
