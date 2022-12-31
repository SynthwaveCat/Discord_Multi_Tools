
#ifndef MY
#define MY

    #include <stdio.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <curl/curl.h>
    #include <json-c/json.h>

    sfRenderWindow *create_renderwindow(unsigned int x, unsigned int y, unsigned int bpp, char *title);
    sfText *create_text(char *string, sfFont *font, sfColor text_color, unsigned int text_size);
    sfRectangleShape *create_rectangle_shape(float x_vector_size, float y_vector_size, float x_vector_position, float y_vector_position, sfColor fill_color, sfColor outline_color, float outline_thickness);

#endif /* !MY */
