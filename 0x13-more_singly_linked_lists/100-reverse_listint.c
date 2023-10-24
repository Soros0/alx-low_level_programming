#include "list.h"
#include <stdlib.h>
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 *return: pointer to the first node in the list
*/
listint_t *inverse_listint(listint_t **head)
{
    listint__t *prev = NULL;
    listint_t *next = NULL;
    while (*head)
    {
    next = (*head)->next;
    (*head)->next = prev;
    prev = *head;
    *head = next;
    }
    *head = prev;
    return (*head);
}