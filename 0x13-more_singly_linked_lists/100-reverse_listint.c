#include "lists.h"
/**
 * reverse_listint - linked list reversed
 * @head: first node pointer
 * Return: pointer to the new list first node
 */
listint_t *reverse_listint(listint_t **header)
{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*header)
{
next = (*header)->next;
(*header)->next = prev;
prev = *header;
*header = next;
}
*header = prev;
return (*header);
}
