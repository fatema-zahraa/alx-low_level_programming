#include "lists.h"
#include <stdio.h>
/**
 * print_list: to print elements in linked list called  list_t
 * @h: header pointer of list_t
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t w = 0;

while (h != 0)
{
if (!h->str == 0)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
w++;
}
return (w);
}
