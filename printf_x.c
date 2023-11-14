#include "main.h"

/**
 * printf_x - prints an unsigned hexadecimal value (lowercase)
 * @args: arguments
 * Return: (Number of characters printed)
 */
int printf_x(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	count += printf_hexadecimal(num, 0);

	return (count);
}
