#include "lists.h"

void free_listint(listint_t *head)
{
    listint_t *current;

    while (head)
    {
        current = head;
        head = head->next;
        free(current);
    }
}

