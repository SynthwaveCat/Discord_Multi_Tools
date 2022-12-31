

#include "my.h"

sfBool mouse_on_rectangle(sfRectangleShape *rectangle, sfRenderWindow *window)
{
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(rectangle);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

    if (mouse.x > rect.left && mouse.x < rect.left + rect.width
        && mouse.y > rect.top && mouse.y < rect.top + rect.height)
        return (sfTrue);
    return (sfFalse);
}
