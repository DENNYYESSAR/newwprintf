#include "main.h"

/**
 * printf_u - prints an unsigned decimal (integer) value
 * @args: arguments
 * Return: (Number of characters printed)
 */
int printf_u(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	count += printf_unsigned int(num);

	return (count);
}
