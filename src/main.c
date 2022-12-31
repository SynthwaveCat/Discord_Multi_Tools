

#include "my.h"

int main(int argc, char const **argv)
{
    //Initialisation des variables et structures
    sfRenderWindow *window;
    sfRectangleShape *button;
    sfVector2f titre_position = {300, 0};
    sfVector2i window_vector = {200, 200};
    sfText *Titre;
    sfFont *font;
    sfEvent event;

    // Initialisation de la fenetre
    window = create_renderwindow(800, 600, 32, "GeoLocationIPTool");
    if (!window)
        return 84;
    sfRenderWindow_setPosition(window, window_vector);

    // Initialisation de la font
    font = sfFont_createFromFile("assets/DejaVuSans.ttf");
    if (!font)
        return 84;

    // Initialisation du titre
    Titre = create_text("Geo IP Tool", font, sfBlack, 25);
    sfText_setPosition(Titre, titre_position);

    // Creation d'un paterne de rectangle
    button = create_rectangle_shape(100, 50, 50, 50, sfGreen, sfBlack, 2);

sfRenderWindow_drawRectangleShape(window, button, NULL);

    while (sfRenderWindow_isOpen(window)) {

        // Gestion d'evenements de la window
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
        // Get text input
            if (event.type == sfEvtTextEntered) {
                if (event.text.unicode < 128) {
                    printf("Ascii charactere typed : %c\n", (char)event.text.unicode);
                }
            }
        }
        // Couleurs de fond de la fenetre
        sfRenderWindow_clear(window, sfWhite);

        // Affichage du Titre
        sfRenderWindow_drawText(window, Titre, NULL);

        // Afficher le rectangle
        sfRenderWindow_drawRectangleShape(window, button, NULL);

        // Affichage de la fenetre
        sfRenderWindow_display(window);
    }

    // Free des elements
    sfText_destroy(Titre);
    sfRenderWindow_destroy(window);
    return 0;
}
