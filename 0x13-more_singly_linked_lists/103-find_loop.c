#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a linked list.
 * @head: A pointer to the beginning of the list.
 *
 * Return: The address of the node where the loop starts, or NULL if there's no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow_runner, *fast_runner;

    slow_runner = fast_runner = head;

    while (slow_runner && fast_runner && fast_runner->next)
    {
        slow_runner = slow_runner->next;
        fast_runner = fast_runner->next->next;

        if (slow_runner == fast_runner)
        {
            slow_runner = head;
            break;
        }
    }

    if (!slow_runner || !fast_runner || !fast_runner->next)
        return (NULL);

    while (slow_runner != fast_runner)
    {
        slow_runner = slow_runner->next;
        fast_runner = fast_runner->next;
    }

    return (fast_runner);
}
