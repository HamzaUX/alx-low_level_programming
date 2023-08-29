#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    if (!new_node || !head)
        return NULL;

    new_node->n = n;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    listint_t *prev = *head;
    for (unsigned int i = 0; i < idx - 1 && prev; i++)
        prev = prev->next;

    if (!prev)
    {
        free(new_node);
        return NULL;
    }

    new_node->next = prev->next;
    prev->next = new_node;
    return new_node;
}

