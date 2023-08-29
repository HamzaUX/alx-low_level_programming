#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    if (!head || !*head)
        return -1;

    if (index == 0)
    {
        listint_t *temp = (*head)->next;
        free(*head);
        *head = temp;
        return 1;
    }

    listint_t *prev = *head;
    for (unsigned int i = 0; i < index - 1 && prev; i++)
        prev = prev->next;

    if (!prev || !prev->next)
        return -1;

    listint_t *current = prev->next;
    prev->next = current->next;
    free(current);
    return 1;
}

