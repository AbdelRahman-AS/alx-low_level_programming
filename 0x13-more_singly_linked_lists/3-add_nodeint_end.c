#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to list.
 * @n: data to add to list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n1;
	listint_t *temp = *head;

	n1 = malloc(sizeof(listint_t));
	if (!n1)
		return (NULL);

	n1->n = n;
	n1->next = NULL;

	if (*head == NULL)
	{
		*head = n1;
		return (n1);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = n1;

	return (n1);
}

