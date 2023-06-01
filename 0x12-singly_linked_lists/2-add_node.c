#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node :to add at start of ;ist_t a new node
 * @head: a list_t double pointer
 * @str: to add a new string to node
 * Return: the new element address,or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *NHD;
unsigned int len = 0;

while (str[len])
len++;

NHD = malloc(sizeof(list_t));
if (!NHD)
return (NULL);

NHD->str = strdup(str);
NHD->len = len;
NHD->next = (*the_head);
(*the_head) = NHD;
return (*the_head);
}
