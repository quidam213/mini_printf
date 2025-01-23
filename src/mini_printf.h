/*
** EPITECH PROJECT, 2025
** mini_printf
** File description:
** mini_printf
*/

#ifndef MINI_PRINTF_H_
#define MINI_PRINTF_H_

//? includes
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//? defines
#define FLAG_MARK '%'
#define N_FLAGS 7

//? structures
typedef struct flag_s {
    char* value;
    int (*function) (va_list);
} flag_t;

//? functions
//* mini_printf.c
int mini_printf(const char* format, ...);
int interpret_flag(const char* format, va_list args);

//* flags.c
flag_t* get_flags();
int c_flag(va_list arg);
int s_flag(va_list arg);
int d_flag(va_list arg);
int f_flag(va_list arg);
int b_flag(va_list arg);
int modulo_flag(va_list arg);

#endif /* !MINI_PRINTF_H_ */
