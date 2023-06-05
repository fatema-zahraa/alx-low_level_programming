#include "lists.h"
/**
 * free_listint - frees ints of linked list
 * @head: pointer of freed listint_t list
 * return: void
 */
void free_listint(listint_t *head)
{
listint_t *last;
while (head)
{
last = head->next;
free(head);
head = last;
}
}
