#include "lists.h"
#include <stdlib.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i;
    dlistint_t *new_node, *current;

    if (!h)
        return (NULL);

    if (idx == 0)
        return (add_dnodeint(h, n));

    current = *h;
    for (i = 0; current && i < idx - 1; i++)
        current = current->next;

    if (!current)
        return (NULL);

    if (!current->next)
        return (add_dnodeint_end(h, n));

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->prev = current;
    new_node->next = current->next;
    current->next->prev = new_node;
    current->next = new_node;

    return (new_node);
}

