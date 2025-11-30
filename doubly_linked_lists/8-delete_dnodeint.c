#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if success, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int i;

    if (!head || !*head)
        return (-1);

    current = *head;
    for (i = 0; current && i < index; i++)
        current = current->next;

    if (!current)
        return (-1);

    if (current->prev)
        current->prev->next = current->next;
    else
        *head = current->next;

    if (current->next)
        current->next->prev = current->prev;

    free(current);
    return (1);
}

