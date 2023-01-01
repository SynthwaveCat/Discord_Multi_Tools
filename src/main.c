
// meow
#include "my.h"

int main(int argc, char const **argv)
{
    //Initialisation des variables et structures CSFML
    sfRenderWindow *window;
    sfEvent event;

    // Initialisation des couleurs
    sfColor sfDarkGreen = sfColor_fromRGB(44, 119, 9);
    sfColor sfGrey = sfColor_fromRGB(136, 136, 136);

    // Initialisation des variables sfBool
    sfBool is_focused = sfFalse;

    // Declarations des rectangles
    sfRectangleShape *button;
    sfRectangleShape *input_box;

    // Declaration de text / fonts
    sfText *Title;
    sfText *submit_button;
    sfFont *font;

    // Declarations des vecteurs de positions
    sfVector2f Title_position = {300, 0};
    sfVector2f submit_button_position = {510, 100};
    sfVector2i window_vector = {200, 200};
    

    // Initialisation de la fenetre
    window = create_renderwindow(800, 600, 32, "GeoLocationIPTool");
    if (!window)
        return 84;
    sfRenderWindow_setPosition(window, window_vector);

    // Initialisation de la font
    font = sfFont_createFromFile("assets/DejaVuSans.ttf");
    if (!font)
        return 84;

    // Initialisation des textes
    Title = create_text("Geo IP Tool", font, sfBlack, 25);
    sfText_setPosition(Title, Title_position);
    submit_button = create_text("Submit", font, sfBlack, 25);
    sfText_setPosition(submit_button, submit_button_position);

    // Creation d'un paterne de rectangle
    button = create_rectangle_shape(100, 50, 510, 100, sfGreen, sfBlack, 2);
    input_box = create_rectangle_shape(400, 50, 100, 100, sfTransparent, sfBlack, 2);

    sfRenderWindow_drawRectangleShape(window, button, NULL);

    while (sfRenderWindow_isOpen(window)) {

        // Gestion d'evenements de la window
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }

            // Boutons
            if (mouse_on_rectangle(input_box, window)) {

                if (click_on_rectangle(input_box, window)) {
                    sfRectangleShape_setFillColor(input_box, sfGrey);
                    is_focused = sfTrue;
                }
            }

            if (mouse_on_rectangle(button, window)) {
                sfRectangleShape_setFillColor(button, sfDarkGreen);
                if (click_on_rectangle(button, window)) {
                    sfRectangleShape_setFillColor(input_box, sfTransparent);
                    is_focused = sfFalse;
                }
            }

            if (is_focused == sfTrue) {
                // Get text input
                if (event.type == sfEvtTextEntered) {
                    if (event.text.unicode < 128) {
                        printf("Ascii charactere typed : %c\n", (char)event.text.unicode);
                    }
                }
            }

            else if (!mouse_on_rectangle(button, window)) {
                sfRectangleShape_setFillColor(button, sfGreen);
            }

            // Couleurs de fond de la fenetre
            sfRenderWindow_clear(window, sfWhite);

            // Affichage des rectangles
            sfRenderWindow_drawRectangleShape(window, button, NULL);
            sfRenderWindow_drawRectangleShape(window, input_box, NULL);

            // Affichage des textes
            sfRenderWindow_drawText(window, Title, NULL);
            sfRenderWindow_drawText(window, submit_button, NULL);

            // Affichage de la fenetre
            sfRenderWindow_display(window);
        }
    }
    // Free des elements
    sfText_destroy(Title);
    sfRenderWindow_destroy(window);
    return 0;
}
