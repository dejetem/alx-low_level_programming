#include "lists.h"
/**
 * free_dlistint - function than add elements to list
 * @head: Pointer type list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp = head;

if (head == NULL)
{
return;
}
free_dlistint(head->next);
free(tmp);
}
