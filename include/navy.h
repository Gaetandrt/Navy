/*
** EPITECH PROJECT, 2021
** navy header file
** File description:
** navy
*/

#ifndef NAVY_H_
#define NAVY_H_

typedef struct game_info_s {
    int my_pid;
    int en_pid;
    int boat_nbr;
} game_info_t;
char **map_init_enemy(void);
char **map_init_my(char *filepath);
void my_putchar(char c);
int my_getnbr(char const *str);
void my_putstr(char const *str);
int my_putnbr(int nb);

#endif
