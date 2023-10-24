#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 *
 * @head: A pointer to the head of the listint_t list
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}
