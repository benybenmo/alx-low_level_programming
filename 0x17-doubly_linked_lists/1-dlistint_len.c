#include "lists.h"

/**
 * dlistint_len - return the numb of elements in a linked dlistint_t list.
 * @h: pointer to the list.
 * Return: numb of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node->next;
	}

	return (cont);
}
