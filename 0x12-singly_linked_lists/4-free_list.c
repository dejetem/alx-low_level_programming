#include "lists.h"

/**
 * free_list - frees a list
 * @head: points
 * Return: 0
 */

void free_list(list_t *head)
{
while (head)
{
free(head->str);
free(head);
head = head->next;
}
}
