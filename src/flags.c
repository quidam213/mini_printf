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
            .value = "c",
            .function = &c_flag
        },
        (flag_t){
            .value = "s",
            .function = &s_flag
        },
        (flag_t){
            .value = "d",
            .function = &d_flag
        },
        (flag_t){
            .value = "i",
            .function = &d_flag
        },
        (flag_t){
            .value = "f",
            .function = &f_flag
        },
        (flag_t){
            .value = "b",
            .function = &b_flag
        },
        (flag_t){
            .value = "%",
            .function = &modulo_flag
        },
    };

    return flags;
}

int c_flag(va_list arg)
{
    return -1;
}

int s_flag(va_list arg)
{
    return -1;
}

int d_flag(va_list arg)
{
    return -1;
}

int f_flag(va_list arg)
{
    return -1;
}

int b_flag(va_list arg)
{
    return -1;
}

int modulo_flag(va_list arg)
{
    return -1;
}
