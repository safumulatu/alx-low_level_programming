#include "lists.h"

/**
 * pop_listint - Deletes the first node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The data from the removed node.
 */
int pop_listint(listint_t **head)
{
    listint_t *temp_node;
    int removed_data;

    if (*head == NULL)
        return (0);

    temp_node = *head;
    removed_data = (*head)->n;
    *head = (*head)->next;

    free(temp_node);

    return (removed_data);
}
