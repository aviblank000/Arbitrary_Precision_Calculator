#include "cal.h"

void print_list_single(Slist *head)
{
	if (head == NULL)
	{
		printf("INFO : List is empty\n");
	}
    else
    {
	    while (head)		
	    {
		if (head -> data == 45)
		{
		    printf("- -> ");
		    head = head -> link;
		    continue;
		}

		    printf("%d -> ", head -> data);
		    head = head -> link;
	    }

	    printf("NULL\n");
    }
}
