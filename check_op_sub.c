/*
#include "cal.h"

void swap(Dlist **a, Dlist **b)
{
    Dlist *temp = *a;
    *a = *b;
    *b = temp;
}

char check_op_sub(char *op, char op1, char op2, char **argv, Dlist **h1, Dlist **t1, Dlist **h2, Dlist **t2)
{
    if (op1 != '+' && op1 != '-')
	op1 = '+';

    if (op2 != '+' &&  op2 != '-')
	op2 = '+';

    if (op1 == '+' && *op == '-' && op2 == '-')
    {
	*op = '+';
	return 0;
    }
    else if (op1 == '-' && *op == '-' && op2 == '+')
    {
	*op = '+';
	return 1;
    }
    else if (op1 == '+' && *op == '-' && op2 == '+')
    {
	*op = '-';
	if (strlen(argv[3]) > strlen(argv[1]))
	{
	    swap(h1, h2);
	    swap(t1, t2);
	    return 1;
	}
	else if (strlen(argv[3]) == strlen(argv[1]))
	{
	    if (strcmp(argv[3], argv[1]) > 0)
	    {
		swap(h1, h2);
		swap(t1, t2);
		return 1;
	    }
	    return 0;
	}
	return 0;
    }
    else if (op1 == '-' && *op == '-' && op2 == '-')
    {
	*op = '-';
	if (strlen(argv[1]) > strlen(argv[3]))
	    return 1;
	else if (strlen(argv[1]) == strlen(argv[3]))
	{
	    if (strcmp(argv[3], argv[1]) > 0)
	    {
		swap(h1, h2);
		swap(t1, t2);
		return 0;
	    }
	    else if (strcmp(argv[3], argv[1]) < 0)
		return 1;
	}
	else if (strlen(argv[1]) < strlen(argv[3]))
	{
	    swap(h1, h2);
	    swap(t1, t2);
	    return 0;
	}
    }
}
*/
