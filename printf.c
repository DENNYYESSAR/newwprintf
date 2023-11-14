#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert p[] =
	{
		{"%s", printf_s}, {"%c", printf_c},
		{"%%", printf_percent},
		{"%i", printf_i}, {"%d", printf_d}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", printf_b},		
		{"%u", printf_u},
		{"%o", printf_o}, {"%x", printf_x}, {"%X", printf_X},
		{"%S", printf_S}, {"%p", printf_p}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	Here:
		continue;
	}
	va_end(args);
	return (length);
}
