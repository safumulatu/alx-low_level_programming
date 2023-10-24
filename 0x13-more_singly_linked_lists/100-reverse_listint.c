#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *current, *previous, *next_node;

    if (head == NULL || *head == NULL)
        return (NULL);

    previous = NULL;

    while ((*head)->next != NULL)
    {
        next_node = (*head)->next;
        (*head)->next = previous;
        previous = *head;
        *head = next_node;
    }

    (*head)->next = previous;

    return (*head);
}
