#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point for testing the list manipulation functions.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    int num;

    head = NULL;

    /* Adding elements to the end of the list */
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);

    /* Printing the list */
    print_listint(head);

    /* Popping the first element */
    num = pop_listint(&head);
    printf("- Removed: %d\n", num);
    print_listint(head);

    /* Popping another element */
    num = pop_listint(&head);
    printf("- Removed: %d\n", num);
    print_listint(head);

    /* Freeing the list */
    free_listint2(&head);
    printf("List pointer: %p\n", (void *)head);

    return (0);
}
