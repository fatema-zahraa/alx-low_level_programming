#include "lists.h"
/**
 * get_nodeint_at_index: the node returned at index of list
 * @head: first node in the linked list
 * @index: index of the returned node
 * Return: pointer to the missing node , or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x = 0;
listint_t *last = head;
while (last && x < index)
{
last = last->next;
x++;
}
return (last ? last : NULL);
}
