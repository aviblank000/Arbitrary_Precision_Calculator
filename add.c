#include "cal.h"

int add(Dlist *head1, Dlist *tail1, Dlist *head2, Dlist *tail2, Slist **res)
{
    Dlist *t1 = tail1, *t2 = tail2;

    int c = 0, n, n1, n2;

    while (t1 || t2)
    {
	if (t1 == NULL)
	    n1 = 0;
	else
	    n1 = t1 -> data;
	
	if (t2 == NULL)
	    n2 = 0;
	else
	    n2 = t2 -> data;

	n = n1 + n2 + c;
	
	sl_insert_at_first(res, n % 10);
	
	c = n / 10;

	if (t1 != NULL)
	    t1  = t1 -> prev;
	
	if (t2 != NULL)
	    t2  = t2 -> prev;
    }
    if (c == 1)
	sl_insert_at_first(res, 1);
    return SUCCESS;
}
