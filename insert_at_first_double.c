#include "cal.h"

int dl_insert_first(Dlist **head, Dlist **tail, int data)
{
    // creating new node.
    Dlist *new = malloc(sizeof(Dlist));
    // checking if the node is created or not.
    if (new == NULL)
	return FAILURE;
    else
    {
	// updating the data, prev link and next link for the new node.
	new -> data = data;
	new -> prev = NULL;
	new -> next = NULL;
	// checking if list is empty.
	if(*head == NULL)
	{
	    // updating head and tail.
	    *head = *tail = new;
	    return SUCCESS;
	}
	else
	{
	    // if list is not empty, updating head only.
	    new -> next = *head;
	    (*head) -> prev = new;
	    *head = new;
	    return SUCCESS;
	}
    }
}
