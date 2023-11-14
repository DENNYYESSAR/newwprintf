#include "main.h"

/**
 * printf_i - prints an integer
 * @args: arguments
 * Return: (Number of characters printed)
 */
int printf_i(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	count += printf_unsigned int(num);

	return (count);
}
