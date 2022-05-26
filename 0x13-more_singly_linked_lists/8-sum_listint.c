i#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 *
 * @head: Pointer to the first element of a linked list.
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);

while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
