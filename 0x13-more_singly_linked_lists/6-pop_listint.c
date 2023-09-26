#include "lists.h"

/**
 * pop_listint - Delete head node of linked list
 * @head: Pointer to first element in linked list
 * Return: Delected data inside element, 0 if list is empty
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
