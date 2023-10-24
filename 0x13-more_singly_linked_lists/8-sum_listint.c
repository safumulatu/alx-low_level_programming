#include "lists.h"

/**
 * sum_listint - Computes the sum of all data (n) in a list.
 *
 * @head: A pointer to the first node of the listint_t list.
 *
 * Return: The sum of all data (n) in the list.
 */
int sum_listint(listint_t *head)
{
    int total_sum = 0;

    while (head != NULL)
    {
        total_sum += head->n;
        head = head->next;
    }

    return total_sum;
}
