#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - to add a new node in list_t end
 * @head: double pointer of list_t list
 * @str: put string in new node
 * Return:new elements address but if it fails so null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NHD;
	list_t *tempO = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	NHD = malloc(sizeof(list_t));
	if (!NHD)
		return (NULL);

	NHD->str = strdup(str);
	NHD->len = len;
	NHD->next = NULL;

	if (*head == NULL)
	{
		*head = NHD;
		return (NHD);
	}

	while (tempO->next)
		tempO = tempO->next;

tempO->next = NHD;
return (NHD);
}
