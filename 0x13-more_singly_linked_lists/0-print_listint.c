#include "lists.h"
#include <stddef.h> /* Add this to include NULL definition */
#include <unistd.h> /* Add this to use write() */

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: head of linklist node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        int n = h->n;

        /* Use write() instead of printf to write to STDOUT */
        if (write(1, &n, 1) == -1)
            return (0); /* Handle write error */

        /* Add a newline character */
        if (write(1, "\n", 1) == -1)
            return (0); /* Handle write error */

        h = h->next;
        count++;
    }
    return (count);
}
