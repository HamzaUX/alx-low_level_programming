#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *new_head)
{
    size_t s = 0;

    while (new_head)
    {
        if (!new_head->data_string)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", new_head->length, new_head->data_string);
        new_head = new_head->next;
        s++;
    }

    return s;
}

