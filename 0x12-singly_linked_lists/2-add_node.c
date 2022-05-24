#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: points
 * @str: points
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *ptr;
int i;

ptr = (list_t *)malloc(sizeof(list_t));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; (*(str + i)) != '\0'; i++)
{
}
ptr->len = i;
ptr->str = strdup(str);
ptr->next = *head;
*head = ptr;
return (ptr);
}
