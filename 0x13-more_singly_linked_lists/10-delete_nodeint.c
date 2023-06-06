#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node in a certain index
 * @head: pointer to the first item in the list
 * @index: index of the node to delete
 * Return: if Success (1) if fail (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
 listint_t *temp = *head;
 listint_t *current = NULL;
 unsigned int x = 0;
 if (*head == NULL)
 return (-1);
 if (index == 0)
 {
 *head = (*head)->next;
 free(temp);
 return (1);
 }
 while (x < index - 1)
 {
 if (!temp || !(temp->next))
 return (-1);
 temp = temp->next;
 x++;
 }
 current = temp->next;
 temp->next = current->next;
 free(current);
 return (1);
}
