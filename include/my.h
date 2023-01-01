
#ifndef MY
#define MY

    #include <stdio.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <curl/curl.h>
    #include <json-c/json.h>

    /* MACRO */

    /* TITLE PROPERTY'S */
    #define TITLE_POS_X                     300
    #define TITLE_POS_Y                     0
    #define TITLE_TEXT                      "Geo IP Tool"

    /* WINDOW PROPERTY'S */

    #define WINDOW_VECTOR_POS_X             200
    #define WINDOW_VECTOR_POS_Y             200
    #define WINDOW_SIZE_POS_X               800
    #define WINDOW_SIZE_POS_Y               600
    #define WINDOW_TEXT                     "GeoLocationIPTool"

    /* SUBMIT BUTTON PROPERTY'S */

    #define SUBMIT_BUTTON_SIZE_POS_X        100
    #define SUBMIT_BUTTON_SIZE_POS_Y        50
    #define SUBMIT_BUTTON_POS_X             510
    #define SUBMIT_BUTTON_POS_Y             100
    #define SUBMIT_BUTTON_TEXT              "Submit"

    /* INPUT BOX PROPERTY'S */

    #define INPUT_BOX_SIZE_POS_X            400
    #define INPUT_BOX_SIZE_POS_Y            50
    #define INPUT_BOX_POS_X                 100
    #define INPUT_BOX_POS_Y                 100

    /* COLOR */

    #define sfDarkGreen sfColor_fromRGB(44, 119, 9)
    #define sfGrey      sfColor_fromRGB(136, 136, 136)

    /* FUNCTIONS */

    sfRenderWindow *create_renderwindow(unsigned int x, unsigned int y, unsigned int bpp, char *title);
    sfText *create_text(char *string, sfFont *font, sfColor text_color, unsigned int text_size);
    sfRectangleShape *create_rectangle_shape(float x_vector_size, float y_vector_size, float x_vector_position, float y_vector_position, sfColor fill_color, sfColor outline_color, float outline_thickness);
    sfBool mouse_on_rectangle(sfRectangleShape *rectangle, sfRenderWindow *window);
    sfBool click_on_rectangle(sfRectangleShape *rectangle, sfRenderWindow *window);

#endif /* !MY */
