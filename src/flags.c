/*
** EPITECH PROJECT, 2025
** mini_printf
** File description:
** flags
*/

#include "mini_printf.h"

flag_t* get_flags()
{
    static flag_t flags[N_FLAGS] = {
        (flag_t){
            .value = 'c',
            .function = &c_flag
        },
        (flag_t){
            .value = 's',
            .function = &s_flag
        },
        (flag_t){
            .value = 'd',
            .function = &d_flag
        },
        (flag_t){
            .value = 'i',
            .function = &d_flag
        },
        (flag_t){
            .value = 'b',
            .function = &b_flag
        },
        (flag_t){
            .value = FLAG_MARK,
            .function = &mark_flag
        }
    };

    return flags;
}

int c_flag(va_list arg)
{
    char c = va_arg(arg, int);

    return write(1, &c, 1);
}

int s_flag(va_list arg)
{
    char* str = va_arg(arg, char *);

    return write(1, str, strlen(str));
}

int d_flag(va_list arg)
{
    int x = va_arg(arg, int);
    char* str = my_itoa(x);
    size_t len = strlen(str);

    write(1, str, len);
    free(str);
    return len;
}

int b_flag(va_list arg)
{
    bool b = va_arg(arg, int);
    char c = b ? '1' : '0';

    return write(1, &c, 1);
}

int mark_flag(va_list arg)
{
    char c = FLAG_MARK;

    return write(1, &c, 1);
}
