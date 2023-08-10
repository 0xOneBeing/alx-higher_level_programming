#include "lists.h"

/**
 * insert_node - inserts in ordered list
 * @head: head of list
 * @number: number to put in
 * Return: address of new node
 *
 * Code by 0xOneBeing
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = number;
	new->next = NULL;
	if ((*head) == NULL)
	{
		*head = new;
		return (new);
	}
	else if ((*head)->n >= number)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		while (temp->next != NULL)
		{
			if (temp->next->n >= number)
			{
				new->next = temp->next;
				temp->next = new;
				return (new);
			}
			temp = temp->next;
		}
		new->next = NULL;
		temp->next = new;
		return (new);
	}
	return (NULL);
}
