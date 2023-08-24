#include <stdlib.h>
#include "lists.h"

size_t list_length(const list_t *new_head)
{
    size_t n = 0;

    while (new_head)
    {
        n++;
        new_head = new_head->next;
    }
    return n;
}

