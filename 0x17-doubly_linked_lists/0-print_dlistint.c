#include "lists.h"

/**
 * print_dlistint - Prints all the elemens of dlistint_h list
 * @h: Pointer to the linkedlist
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;
    
    while (h)
    {
        count++;
        printf("%i\n", h->n);
        h = h->next;
    }
    return (count);
}
