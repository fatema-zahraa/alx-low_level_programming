#include "lists.h"
/**
 * pop_listint -head node is deleted in list
 * @head: first element pointer in list
 * Return:  deleted data inside the elements,
 * or 0 if an emty list
 */
int pop_listint(listint_t **head)
{
listint_t *last;
int number;
if (!head || !*head)
return (0);
number = (*head)->n;
last = (*head)->next;
free(*head);
*head = last;
return (number);
}

