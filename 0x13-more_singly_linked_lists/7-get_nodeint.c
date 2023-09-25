#include "lists.h"

/**
 * get_nodeint_at_index - Return node at a certain index in limked list
 * @head: The first node in linked list
 * @index: The index to return
 * Return: Pointer to node, or NULL
 */
listint_t 8get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
