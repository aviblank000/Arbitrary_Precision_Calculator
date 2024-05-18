#include "cal.h"

int sl_insert_at_first(Slist **head, int data)
{
    // creating new node.
    Slist *new = malloc(sizeof(Slist));
    // checking DMA.
    if (new == NULL)
	return FAILURE;
    else
    {
	// updating the new node data.
	new -> data = data;
	new -> link = NULL;
	// checking if the list is empty.
	if (*head == NULL)
	{
	    *head = new;
	    return SUCCESS;
	}
	else
	{
	    // updaing new node in the first position.
	    new -> link = *head;
	    *head = new;
	    return SUCCESS;
	}
    }
}
