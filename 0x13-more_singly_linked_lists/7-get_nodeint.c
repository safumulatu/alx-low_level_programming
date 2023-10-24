#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the nth node of a listint_t linked list.
 * @head: A pointer to the first node of the listint_t list.
 * @index: The index of the node to retrieve.
 *
 * Return: A pointer to the node at the given index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int currentIndex;

    if (head == NULL)
        return (NULL);

    for (currentIndex = 0; currentIndex < index; currentIndex++)
    {
        head = head->next;
        if (head == NULL)
            return (NULL);
    }

    return (head);
}

