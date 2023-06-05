#include "lists.h"
/**
 * add_nodeint - adds a new node to the start of the linked list
 * @head: pointer of the first node
 * @n: inserted data in the new node
 * Return: new node pointer , or if fails (NULL)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nw_node;
new = malloc(sizeof(listint_t));
if (!nw_node)
return (NULL);
nw_node->n = n;
nw_node->next = *head;
*head = nw_node;
return (nw_node);
}
