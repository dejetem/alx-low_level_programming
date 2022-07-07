#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *node = head;
int sum = 0;

if (head == NULL)
return (0);
while (node)
{
sum += node->n;
node = node->next;
}
return (sum);
}
