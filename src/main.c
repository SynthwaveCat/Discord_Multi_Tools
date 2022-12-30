

#include "my.h"

int main(int argc, char const **argv)
{
    //Initialisation des variables et structures
    sfRenderWindow *window;
    sfText *Titre;
    sfFont *font;
    sfEvent event;
    
    // Initialisation de la fenetre
    window = create_renderwindow(800, 600, 32, "GeoLocationIPTool");
    if (!window)
        return 84;

    // Initialisation de la font
    font = sfFont_createFromFile("assets/DejaVuSans.ttf");
    if (!font)
        return 84;

    // Initialisation de la font
    Titre = create_text("Geo IP Tool", font, sfBlack, 25);


    while (sfRenderWindow_isOpen(window)) {

        // Gestion d'evenements de la window
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
        }
        // Couleurs de fond de la fenetre
        sfRenderWindow_clear(window, sfWhite);

        // Affichage du Titre
        sfRenderWindow_drawText(window, Titre, NULL);

        // Affichage de la fenetre
        sfRenderWindow_display(window);
    }

    // Free des elements
    sfText_destroy(Titre);
    sfRenderWindow_destroy(window);
    return 0;
}
