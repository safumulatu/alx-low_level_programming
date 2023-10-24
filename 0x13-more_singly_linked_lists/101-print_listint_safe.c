#include "lists.h"

/**
 * print_listint_safe - Prints a linked list safely, detecting loops.
 * @head: A pointer to the first node of the linked list.
 *
 * Return: The number of nodes printed before detecting a loop (if any).
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = NULL;
    const listint_t *runner = NULL;
    size_t nodeCount = 0;

    current = head;
    while (current)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        nodeCount++;
        current = current->next;

        runner = head;
        size_t count = 0;
        while (count < nodeCount)
        {
            if (current == runner)
            {
                printf("-> [%p] %d\n", (void *)current, current->n);
                return nodeCount;
            }
            runner = runner->next;
            count++;
        }
        if (!head)
            exit(98);
    }

    return nodeCount;
}
