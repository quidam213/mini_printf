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
    char flag = format[0];

    for (size_t i = 0; i < N_FLAGS; i ++) {
        if (flags[i].value == flag) {
            return flags[i].function(args);
        }
    }
    write(2, FLAG_NOT_FOUND, strlen(FLAG_NOT_FOUND));
    return -1;
}

int mini_printf(const char* format, ...)
{
    int len = 0;
    va_list args;

    if (!format) {
        write(2, NULL_FORMAT, strlen(NULL_FORMAT));
        return -1;
    }
    va_start(args, format);
    for (size_t i = 0; format[i]; i ++) {
        if (format[i] == FLAG_MARK) {
            int tmp = interpret_flag(&format[i + 1], args);
            if (tmp < 0) {
                return -1;
            }
            len += tmp;
            i ++;
        } else {
            write(1, &format[i], 1);
            len ++;
        }
    }
    va_end(args);
    return len;
}
