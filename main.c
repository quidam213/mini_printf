/*
** EPITECH PROJECT, 2025
** mini_printf
** File description:
** main
*/

#include "src/mini_printf.h"

//! only for testing you know...

int main(void)
{
    mini_printf("coucou !!!\n");
    mini_printf("Voici la lettre : %c\n", 'A');
    mini_printf("Je m'appelle %s\n", "Adam");
    mini_printf("Booléen true : %b\n", true);
    mini_printf("Booléen false : %b\n", false);
    mini_printf("%d %d %d %i %i\n", 42, 0, -42, -42, 42);
    mini_printf("On utilise le modulo avant les flag %%!\n");
    mini_printf("Plusieur%c %s%% à la suite : %b et la réponse à la vie : %d\n", 's', "flags", true, 42);
    mini_printf("flag sans rien : %");
    mini_printf("flag qui existe pas : %w");

    // char *str1 = my_itoa(1423);
    // char *str2 = my_itoa(0);
    // char *str3 = my_itoa(-100);
    // char *str4 = my_itoa(1.13);
    // printf("%s\n%s\n%s\n%s\n", str1, str2, str3, str4);
    // free(str1), free(str2), free(str3), free(str4);
    return 0;
}
