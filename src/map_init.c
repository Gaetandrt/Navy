/*
** EPITECH PROJECT, 2021
** initialisation of the 2 maps
** File description:
** map_init
*/

#include <stdlib.h>
#include "navy.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>

char **map_init_enemy(void)
{
    char **map_enemy = malloc(sizeof(char *) * 10);

    for (int i = 0; i != 12; i++) {
        map_enemy[i] = malloc(sizeof(char) * 20);
    }
    map_enemy[0] = " |A B C D E F G H\0";
    map_enemy[1] = "-+---------------\0";
    map_enemy[2] = "1|. . . . . . . .\0";
    map_enemy[3] = "2|. . . . . . . .\0";
    map_enemy[4] = "3|. . . . . . . .\0";
    map_enemy[5] = "4|. . . . . . . .\0";
    map_enemy[6] = "5|. . . . . . . .\0";
    map_enemy[7] = "6|. . . . . . . .\0";
    map_enemy[8] = "7|. . . . . . . .\0";
    map_enemy[9] = "8|. . . . . . . .\0";
    return (map_enemy);
}

char **map_init_my(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *buf = malloc(sizeof(char) * (179));
    read(fd, buf, 179);
    int j = 0;
    int i = 0;
    char **map_my = malloc(sizeof(char *) * 10);

    for (int i = 0; i != 11; i++) {
        map_my[i] = malloc(sizeof(char) * 20);
    }
    for (int cpt = 0; buf[cpt] != '\0'; cpt++) {
        map_my[j][i] = buf[cpt];
        i++;
        if (buf[cpt] == '\n') {
            map_my[j][i + 1] = '\0';
            i = 0;
            j += 1;
        }
    }
    return (map_my);
}
