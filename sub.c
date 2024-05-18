#include "cal.h"


int sub(Dlist *head1, Dlist *tail1, Dlist *head2, Dlist *tail2, Slist **res)
{
   
    Dlist *t1 = tail1, *t2 = tail2;

    int b = 0, n, n1, n2;

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

	if (b == 1)
	{
	    n1 = n1 - 1;
	    b = 0;
	}

	if (n2 > n1)
	{
	    b = 1;
	    n = (n1 + 10) - n2;
	}
	else
	    n = n1 - n2;
        
	sl_insert_at_first(res, n);

        if (t1 != NULL)
            t1  = t1 -> prev;

        if (t2 != NULL)
            t2  = t2 -> prev;
    }
    return SUCCESS;
}
