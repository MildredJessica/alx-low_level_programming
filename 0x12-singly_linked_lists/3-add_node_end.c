#include "lists.h"

/**
  * add_node_end - Adds a node to the end of the linkedlist
  * @head: The linked list
  * @str: String
  * Return: A linkedlist
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *curr;
	int n;

	curr = *head;
	while (curr && curr->next != NULL)
		curr = curr->next;
	for (n = 0; str[n] != '\0'; n++)
		;
	new_node = malloc(sizeof(list_t));
	
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = n;
	new_node->next = NULL;
	if (curr)
		curr->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
