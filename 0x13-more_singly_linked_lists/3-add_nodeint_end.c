#include "list.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element of the list
 * @n: data to insert in the new element
 * Return: pointer to the noce, NULL if it fails
*/

listint *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (new)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
    *head = new;
    Return(new);
}

while (temp->next)
temp = temp->next;

temp->next = new;
return (new);
}