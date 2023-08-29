#include "lists.h"

void free_listint2(listint_t **head)
{
    listint_t *current;

    if (!head)
        return;

    while (*head)
    {
        current = *head;
        *head = (*head)->next;
        free(current);
    }
}

