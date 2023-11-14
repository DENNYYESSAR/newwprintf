#include "main.h"

/**
 * printf_HEX - prints hexadecimal in caps
 * @args: arguments
 * Return: caps
 */
int printf_HEX(va_list args)
{
        int i, count = 0;
        int *ptr;
        char buffer[1024];
        unsigned int dig = va_arg(args, unsigned int);
        unsigned int var = dig;

        while (dig / 16 != 0)
        {
                dig = dig / 16;
                count++;
        }
        count++;
        ptr = malloc(sizeof(unsigned int) * count);
        if (ptr == NULL)
                return (0);

        char *buf_ptr;
        buf_ptr = buffer;

        for (i = 0; i < count; i++)
        {
                ptr[i] = var % 16;
                var = var / 16;
        }

        for (i = count - 1; i >= 0; i--)
        {
                if (ptr[i] > 9)
                        *buf_ptr++ = ptr[i] + 'A' - 10;
                else
                        *buf_ptr++ = ptr[i] + '0';
        }

        write(1, buffer, buf_ptr - buffer);
        free(ptr);

        return (count);
}
