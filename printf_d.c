#include "main.h"

/**
 * printf_d - prints a decimal (integer) value
 * @args: arguments
 * Return: (Number of characters printed)
 */
int printf_d(va_list args)
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
