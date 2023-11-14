#include "main.h"

/**
 * printf_X - prints an unsigned hexadecimal value (uppercase)
 * @args: arguments
 * Return: (Number of characters printed)
 */
int printf_X(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	count += printf_hexadecimal(num, 1);

	return (count);
}
