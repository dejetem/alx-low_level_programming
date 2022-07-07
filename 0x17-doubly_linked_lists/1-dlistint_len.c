#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in
 * a: linked dlistint_t list
 * @h: head of the list
 * Return: the number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
int count = 0;

if (h == 0)
{
return (count);
}
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
