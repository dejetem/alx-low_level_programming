#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer
 * @str: points
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *new1;
int i;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
i = 0;
while (str[i])
i++;
new_node->str = strdup(str);
new_node->len = i;
new_node->next = NULL;

if (*head == NULL)
*head = new_node;
else
{
new1 = (*head);
while (new1->next != NULL)
{
new1 = new1->next;
}
new1->next = new_node;
}

return (new_node);
}
