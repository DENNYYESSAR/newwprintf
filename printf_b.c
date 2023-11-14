#include "main.h"

/**
 * printf_b - prints the binary representation of an unsigned integer
 * @args: arguments
 * Return: (Number of characters printed)
 */
int printf_b(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	count += printf_binary(num);

	return (count);
}
/**
 * printf_binary - prints the binary representation of an unsigned integer
 * @num: unsigned integer to be printed in binary
 * Return: (Number of characters printed)
 */
int printf_binary(unsigned int num)
{
	int count = 0;

	if (num > 1)
		count += printf_binary(num / 2);

	_putchar((num % 2) + '0');
	count++;

	return (count);
}
