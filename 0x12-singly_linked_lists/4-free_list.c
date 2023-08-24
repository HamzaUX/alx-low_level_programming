#include <stdlib.h>
#include "lists.h"

void free_list(list_t *new_head)
{
    list_t *temp;

    while (new_head)
    {
        temp = new_head->next;
        free(new_head->data_string);
        free(new_head);
        new_head = temp;
    }
}

