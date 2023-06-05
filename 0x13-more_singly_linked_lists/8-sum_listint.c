#include "lists.h"
/**
 * sum_listint - calculates the sum of data in the list
 * @head: pointer of first node in list
 *
 * Return: sum result
 */
int sum_listint(listint_t *head)
{
 int sum = 0;
 listint_t *last = head;
 while (temp)
 {
 sum += last->n;
 last = last->next;
 }
 return (sum);
}
