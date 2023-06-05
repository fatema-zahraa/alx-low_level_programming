#include "lists.h"
/**
 * print_listint - prints linked list elements
 * @h: to print listint_t
 * Return: nodes number
 */
size_t print_listint(const listint_t *h)
{
size_t number = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
number++;
}
return (number);
}
