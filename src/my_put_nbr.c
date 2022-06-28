/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** Display all the number of a string
*/

#include "navy.h"

void my_putchar(char c);

int my_putnbr(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        my_putnbr(147483648);
        return (0);
    }
    if (nb < 0) {
        nb = nb * (-1);
        my_putchar('-');
    }
    if (nb > 9) {
        int c = nb % 10;
        nb = nb / 10;
        my_putnbr(nb);
        my_putchar(c + 48);
    } else {
        my_putchar(nb + 48);
    }
    return (0);
}
