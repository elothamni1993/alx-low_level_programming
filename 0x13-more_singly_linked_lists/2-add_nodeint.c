#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *               of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new = NULL;

    // Allocate memory for the new node
    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    // Assign values to the new node
    new->n = n;
    new->next = NULL;

    if (*head != NULL)
        new->next = *head;

    *head = new;

    return (new);
}
