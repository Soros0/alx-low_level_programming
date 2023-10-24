#include "list.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: date to insert in that new node
 * Return; poite rto the new node, or NULL if it fails
 *
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    new = malloc(sizeof(listont_t));
    if (!new)
    return (NULL);

    new->n = n;
    new->next = *head;
    *head = new;

    return (new);
}