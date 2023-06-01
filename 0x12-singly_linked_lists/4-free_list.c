#include <stdlib.h>
#include "lists.h"
/**
 * free_list -to make list_t free
 * @head: list_t to be freed
 */
void free_list(list_t *head)
{
	list_t *tempo;

	while (the_head)
	{
		tempo = the_head->next;
		free(the_head->str);
		free(the_head);
		the_head = tempo;
}
}
