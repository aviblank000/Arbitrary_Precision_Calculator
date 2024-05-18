#include "cal.h"

int find_len(Dlist *h)
{
    Dlist *temp = h;
    int count = 0;
    while (temp)
    {
	temp = temp -> next;
	count++;
    }
    return count;
}

int check(Dlist *h1, Dlist *t1, Dlist *h2, Dlist *t2)
{
    if (find_len(h1) > find_len(h2))
	return 0;
    else if (find_len(h1) < find_len(h2))
	return 1;
    else
    {
	Dlist *temp1 = h1, *temp2 = h2;
	int flag = 0;
	while (temp1)
	{
	    if (temp1 -> data < temp2 -> data)
	    {
		flag = 1;
		break;
	    }
	    else if (temp1 -> data > temp2 -> data)
		break;
	    else
	    {
		temp1 = temp1 -> next;
		temp2 = temp2 -> next;
	    }	

	}

	if (flag)    
	    return 1;
	else
	    return 0;
    }
    return 0;    
}

int divi(char *op, char op1, char op2, char **argv, Dlist **h1, Dlist **t1, Dlist **h2, Dlist **t2,  Slist **res)
{
    int count = 0;

    Dlist *hr = *h1, *tr = *t1, *th = NULL, *tt = NULL;
	
    while (1)
    {
	while (hr -> data == 0 && hr -> next != NULL)
	    hr = hr -> next;
	
	if (check(hr, tr, *h2, *t2))
	    break;
        
	th = hr; tt = tr;
	hr = tr = NULL;	       
	sub_div(th, tt, *h2, *t2, &hr, &tr);
	
	count++;
    }
    
    return count;
}


