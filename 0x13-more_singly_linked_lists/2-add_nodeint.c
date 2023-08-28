#include "lists.h"

/**
 * add_nodeint - adds a new node at the end of a listint_t list.
 * @head: pointer to list.
 * @n: data to add to list.
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n1;

	n1 = malloc(sizeof(listint_t));
	if (!n1)
		return (NULL);

	n1->n = n;
	n1->next = *head;
	*head = n1;

	return (n1);
}

