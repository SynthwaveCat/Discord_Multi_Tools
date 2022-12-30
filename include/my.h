/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MY
#define MY

    #include <stdio.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>

    sfRenderWindow *create_renderwindow(unsigned int x, unsigned int y, unsigned int bpp, char *title);
    sfText *create_text(char *string, sfFont *font, sfColor text_color, unsigned int text_size);

#endif /* !MY */
