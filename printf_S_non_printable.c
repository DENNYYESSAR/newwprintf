#include "main.h"

/**
 * printf_S_non_printable - prints a string with non-printable characters
 * @args: arguments
 * Return: (Number of characters printed)
 */
int printf_S_non_printable(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		if (*str < 32 || *str >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += printf_hexadecimal(*str, 1);
		}
		else
		{
			_putchar(*str);
			count++;
		}
		str++;
	}

	return (count);
}
