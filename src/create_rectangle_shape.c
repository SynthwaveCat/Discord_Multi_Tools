

#include "my.h"

sfRectangleShape *create_rectangle_shape(float x_vector_size, float y_vector_size, float x_vector_position, float y_vector_position, sfColor fill_color, sfColor outline_color, float outline_thickness)
{
    sfRectangleShape *rect = sfRectangleShape_create();
    sfRectangleShape_setSize(rect, (sfVector2f){x_vector_size, y_vector_size});
    sfRectangleShape_setPosition(rect, (sfVector2f){x_vector_position, y_vector_position});
    sfRectangleShape_setFillColor(rect, fill_color);
    sfRectangleShape_setOutlineColor(rect, outline_color);
    sfRectangleShape_setOutlineThickness(rect, outline_thickness);
    return rect;
}