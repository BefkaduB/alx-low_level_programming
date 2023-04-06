#include "lists.h"
/**
 * pop_listint - delete the head node
 * @head: Pointer to the first element of the list
 * Return: the new list after the node delete
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
