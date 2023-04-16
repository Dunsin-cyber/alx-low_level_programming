#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a linked list
 * @head: pointer to the head pointer of the linked list
 * @index: index where the new node should be inserted (0-based)
 * @data: the data for the new node
 * Return: a pointer to the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int data)
{
    listint_t *current = *head;
    listint_t *new_node = malloc(sizeof(listint_t));
    
    if (new_node == NULL)
        return NULL;
    
    new_node->n = data;
    
    if (index == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }
    
    while (index > 1 && current != NULL)
    {
        current = current->next;
        index--;
    }
    
    if (current == NULL)
    {
        free(new_node);
        return NULL;
    }
    
    new_node->next = current->next;
    current->next = new_node;
    
    return new_node;
}
