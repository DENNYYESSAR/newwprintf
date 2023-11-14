#include "main.h"

/**
 * printf_o - prints an unsigned octal value
 * @args: arguments
 * Return: (Number of characters printed)
 */
int printf_o(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	count += printf_octal(num);

	return (count);
}
