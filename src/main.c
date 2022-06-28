/*
** EPITECH PROJECT, 2021
** navy main file
** File description:
** main
*/

#include <unistd.h>
#include "navy.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

void host_party(__attribute__((unused))int ac, __attribute__((unused))char **av, game_info_t *game_info)
{
    game_info->my_pid = getpid();
    my_putstr("my_pid: ");
    my_putnbr(getpid());
    my_putstr("\nwaiting for enemy connection...\n");
    my_putstr("\nenemy connected\n");
}

void join_party(__attribute__((unused))int ac, char **av, game_info_t *game_info)
{
    game_info->my_pid = getpid();
    game_info->en_pid = my_getnbr(av[1]);
    my_putstr("my_pid: ");
    my_putnbr(getpid());
    my_putstr("\nsuccessfully connected\n");
}

int main(int ac, char **av)
{
    if (ac != 2 && ac != 3)
        return (84);
    game_info_t game_info = {0, 0, 0};
    if (ac == 2) {
        host_party(ac, av, &game_info);
    } else {
        join_party(ac, av, &game_info);
    }
}
