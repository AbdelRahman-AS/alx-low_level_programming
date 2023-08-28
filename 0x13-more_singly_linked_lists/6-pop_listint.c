#include "lists.h"

/**
 * pop_listint - deletes head node of listint, and returns the head node.
 * @head: pointer to the first element in the linked list
 *
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}

