#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **new_head, const char *data_string)
{
    list_t *new;
    unsigned int length = 0;

    while (data_string[length])
        length++;

    new = malloc(sizeof(list_t));
    if (!new)
        return NULL;

    new->data_string = strdup(data_string);
    new->length = length;
    new->next = (*new_head);
    (*new_head) = new;

    return (*new_head);
}

