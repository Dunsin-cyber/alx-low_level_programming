#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @list: pointer to the head of the linked list
 * @n: the index of the desired node (0-based)
 * Return: a pointer to the nth node, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *list, unsigned int n)
{
unsigned int count = 0;
listint_t *current = list;

if (list == NULL)
return (NULL);
while (current != NULL && count < n)
{
current = current->next;
count++;
}
if (count == n)
return (current);
else
return (NULL);
}
