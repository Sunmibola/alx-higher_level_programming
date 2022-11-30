#include "lists.h"
/**
 * insert_node - inserts a new node
 * @head: head of a list.
 * @number: The number to inserts in the singly linked list
 * Return: The singly linked list with the new number added
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *h;
	listint_t *h_prev;

	h = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	while (h != NULL)
	{
		if (h->n > number)
			break;
		h_prev = h;
		h = h->next;
	}

	new->n = number;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = h;
		if (h == *head)
			*head = new;
		else
			h_prev->next = new;
	}
	return (new);
}
