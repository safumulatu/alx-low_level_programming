#include "lists.h"

/**
 * free_listint_safe - Safely frees a linked list.
 * @head: A pointer to the first node in the linked list.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **head)
{
    size_t elementCount = 0;
    listint_t *temp;

    if (!head || !*head)
        return (0);

    while (*head)
    {
        if (*head < (*head)->next)
        {
            temp = (*head)->next;
            free(*head);
            *head = temp;
            elementCount++;
        }
        else
        {
            free(*head);
            *head = NULL;
            elementCount++;
            break;
        }
    }

    *head = NULL;

    return elementCount;
}
