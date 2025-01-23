/*
** EPITECH PROJECT, 2025
** mini_printf
** File description:
** itoa
*/

#include "mini_printf.h"

static size_t my_intlen(int x)
{
    int len = 0;

    if (x < 0) {
        len ++;
        x = -x;
    }
    while (x > 0) {
        x /= 10;
        len ++;
    }
    return len;
}

static void my_reverse(char *str)
{
    int l = 0;
    int r = strlen(str) - 1;
    char t;

    while (l < r) {
        t = str[l];
        str[l] = str[r];
        str[r] = t;
        l++;
        r--;
    }
}

char* my_itoa(int x)
{
    size_t len = my_intlen(x), i = 0;
    bool pos = true;
    char *str = malloc(sizeof(char) * (len + 1));

    if (x == 0) {
        str = malloc(sizeof(char) * 2);
        str[0] = '0';
        str[1] = '\0';
        return str;
    }
    if (x < 0) {
        x = -x;
        pos = false;
    }
    while (x > 0) {
        str[i] = x % 10 + '0';
        x /= 10;
        i ++;
    }
    if (!pos) {
        str[i] = '-';
        i ++;
    }
    str[i] = '\0';
    my_reverse(str);
    return str;
}
