#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * linked list.
 * @head: pointer to the first element
 * @index: The index of the node
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int posicion = 0;

if (head == NULL)
return (NULL);
while (posicion < index)
{
if (head->next == NULL)
return (NULL);
head = head->next;
posicion++;
}
return (head);
}
