#include "lists.h"
/**
 * add_nodeint_end - a node added at the bottom of a linked list
 * @head: first node pointer in list
 * @n: inserted data to the new element
 * Return: new node pointer , or if fails(NULL)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nw_node;
listint_t *temp = *head;
nw_node = malloc(sizeof(listint_t));
if (!nw_node)
return (NULL);
nw_node->n = n;
nw_node->next = NULL;
if (*head == NULL)
{
*head = nw_node;
return (nw_node);
}
while (last->next)
last = last->next;
last->next = nw_node;
return (nw_node);
}
