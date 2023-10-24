#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a specified position.
 * @head: A pointer to the address of the head of the listint_t list.
 * @idx: The index at which the new node should be added (starting from 0).
 * @n: The integer value to assign to the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current_node = *head;
    unsigned int position;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    if (idx == 0)
    {
        new_node->next = current_node;
        *head = new_node;
        return (new_node);
    }

    for (position = 0; position < (idx - 1); position++)
    {
        if (current_node == NULL)
            return (NULL);

        current_node = current_node->next;
    }

    new_node->next = current_node->next;
    current_node->next = new_node;

    return (new_node);
}
