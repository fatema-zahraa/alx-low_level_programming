#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns elements of list_t
 * @h:list_t pointer
 * Return: the elements number of h
 */
size_t list_len(const list_t *h)
{
size_t x = 0;

while (h)
{
x++;
h = h->next;
}
return (x);
}
