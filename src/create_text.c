

#include "my.h"

sfText *create_text(char *string, sfFont *font, sfColor text_color, unsigned int text_size)
{
    sfText *text = sfText_create();
    sfText_setString(text, string);
    sfText_setFont(text, font);
    sfText_setColor(text, text_color);
    sfText_setCharacterSize(text, text_size);
    return text;
}
