/*
** EPITECH PROJECT, 2025
** mini_printf
** File description:
** main
*/

#include "src/mini_printf.h"

int main(void)
{
    mini_printf("coucou !!!\n");
    mini_printf("Voici la lettre : %c\n", 'A');
    mini_printf("Je m'appelle %s\n", "Adam");
    mini_printf("Booléen true : %b\n", true);
    mini_printf("Booléen false : %b\n", false);
    mini_printf("On utilise le modulo avant les flag %%!\n");
    mini_printf("flag sans rien : %");
    mini_printf("flag qui existe pas : %w");
    return 0;
}
