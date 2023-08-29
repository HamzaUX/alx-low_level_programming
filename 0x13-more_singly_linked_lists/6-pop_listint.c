#include "lists.h"

int pop_listint(listint_t **head)
{
    if (!head || !*head)
        return 0;

    int num = (*head)->n;
    listint_t *temp = (*head)->next;
    free(*head);
    *head = temp;

    return num;
}

