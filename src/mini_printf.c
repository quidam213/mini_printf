/*
** EPITECH PROJECT, 2025
** mini_printf
** File description:
** mini_printf
*/

#include "mini_printf.h"


int interpret_flag(const char* format, va_list args)
{
    flag_t *flags = get_flags();

    return -1;
}

int mini_printf(const char* format, ...)
{
    int len = 0;

    va_list args;
    va_start(args, format);
    for (size_t i = 0; format[i]; i ++) {
        if (format[i] == FLAG_MARK) {
            len += interpret_flag(&format[i], args);
        } else {
            write(1, &format[i], 1);
            len ++;
        }
    }
    va_end(args);
    return len;
}
