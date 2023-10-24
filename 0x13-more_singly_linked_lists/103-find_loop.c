#include "list.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of thenode where the loop starts, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
    listint_t *fast = head;

    if (!head)
    return (NULL);
    while (slow && fast && fast->next)
    {
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
{
			slow = slow->next;
			fast->fast->next;
}
    }
    return (NULL)
}