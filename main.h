#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct convert - Struct for conversion specifier
 * @ph: The conversion specifier
 * @function: The function associated with the specifier
 */
typedef struct convert
{
	char *ph;
	int (*function)(va_list);
}
convert;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_c(va_list args);
int printf_s(va_list args);
int printf_percent(va_list args);
int printf_d(va_list args);
int printf_i(va_list args);
int printf_b(va_list args);
int printf_binary(unsigned int num);
int printf_u(va_list args);
int printf_o(va_list args);
int printf_x(va_list args);
int printf_X(va_list args);
int printf_HEX(va_list args);
int printf_S(va_list args);
int printf_S_non_printable(va_list args);
int printf_p(va_list args);
int printf_plus(va_list args);
int printf_space(va_list args);
int printf_hash(va_list args);
int printf_length_l(char specifier);
int printf_length_h(char specifier, va_list args);
int printf_field_width(char specifier, int width, va_list args);
int printf_precision(char specifier, int precision, va_list args);
int printf_zero_flag(char specifier, int width, va_list args);
int printf_minus_flag(char specifier, int width, va_list args);
int printf_custom_r(va_list args)
#endif
