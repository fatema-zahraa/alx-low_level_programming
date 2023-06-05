#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer of freed list of  the listint_t
 */
void free_listint2(listint_t **head)
{
listint_t *last;
if (head == NULL)
return;
while (*head)
{
last = (*head)->next;
free(*head);
*head = last;
}
*head = NULL;
}
