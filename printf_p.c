#include "main.h"

/**
 * printf_p - prints a pointer address
 * @args: arguments
 * Return: (Number of characters printed)
 */
int printf_p(va_list args)
{
	void *ptr = va_arg(args, void*);
	unsigned long int address = (unsigned long int)ptr;
	int count = 0;

	_putchar('0');
	_putchar('x');
	count += 2;
	count += printf_hexadecimal(address, 0);

	return (count);
}
