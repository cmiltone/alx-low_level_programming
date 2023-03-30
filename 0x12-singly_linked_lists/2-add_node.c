#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds element to begining of a list
 * @head: the list's head
 * Return: list
*/

list_t *add_node(list_t **head, const char *str)
{
  list_t *tmpNode = malloc(sizeof(list_t));
  if (tmpNode == NULL)
  {
    return (NULL);
  }
  
  tmpNode->str = strdup(str);
  tmpNode->len = strlen(str);
  tmpNode->next = (*head);
  (*head) = tmpNode;

  return (*head);
}
