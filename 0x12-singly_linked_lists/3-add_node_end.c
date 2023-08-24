#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node_end(list_t **new_head, const char *data_string)
{
    list_t *new;
    list_t *temp = *new_head;
    unsigned int length = 0;

    while (data_string[length])
        length++;

    new = malloc(sizeof(list_t));
    if (!new)
        return NULL;

    new->data_string = strdup(data_string);
    new->length = length;
    new->next = NULL;

    if (*new_head == NULL)
    {
        *new_head = new;
        return new;
    }

    while (temp->next)
        temp = temp->next;

    temp->next = new;

    return new;
}

