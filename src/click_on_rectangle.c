

#include "my.h"

sfBool click_on_rectangle(sfRectangleShape *rectangle, sfRenderWindow *window)
{
    if (mouse_on_rectangle(rectangle, window) && sfMouse_isButtonPressed(sfMouseLeft))
        return (sfTrue);
    return (sfFalse);
}
