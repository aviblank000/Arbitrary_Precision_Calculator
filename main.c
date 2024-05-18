#include "cal.h"

/*  
void sp(Dlist **a, Dlist **b)
{
    Dlist *temp = *a;
    *a = *b;
    *b = temp;
}
*/
int main(int argc, char **argv)
{
    int i, j;

    if (argc != 4)
    {
	printf("Invalid number of arguments\n");
	return -1;
    }

    if (argc == 4)
    {	
	if (strlen(argv[2]) != 1)
	{
	    printf("Invalid operator\n");
	    return -1;
	}

	Dlist *h1, *h2, *t1, *t2;
	h1 = h2 = t1 = t2 = NULL;
	
	Slist *res = NULL;
	
	if (my_atoi(argv[1], &h1, &t1) == FAILURE)
	    return -1;
	if (my_atoi(argv[3], &h2, &t2) == FAILURE)
	    return -1;

	print_list_double(h1);
	print_list_double(h2);
	
	char op = argv[2][0];		
	char op1 = argv[1][0];
	char op2 = argv[3][0];

	char f1 = check_op_sub(&op, op1, op2, argv, &h1, &t1, &h2, &t2);

/*
	if (op1 != '+' && op1 != '-')
	    op1 = '+';
	
	if (op2 != '+' &&  op2 != '-')
	    op2 = '+';

	//printf("%c %c %c\n", op, op1, op2);

	int opf = 0, f1 = 0;

	if (op1 == '+' && op == '-' && op2 == '-')
	    op = '+';
	else if (op1 == '-' && op == '-' && op2 == '+')
	{
	    op = '+';
	    opf = 1;
	}
	else if (op1 == '+' && op == '-' && op2 == '+')	
	{
	    op = '-';
	    if (strlen(argv[3]) > strlen(argv[1]))
	    {
		sp(&h1, &h2);
		sp(&t1, &t2);
		f1 = 1;
	    }
	    else if (strlen(argv[3]) == strlen(argv[1]))
	    {
		if (strcmp(argv[3], argv[1]) > 0)
		{
		    sp(&h1, &h2);
		    sp(&t1, &t2);
		    f1 = 1;
		}
	    }
	}
	else if (op1 == '-' && op == '-' && op2 == '-')
	{
	    op = '-';
	    if (strlen(argv[1]) > strlen(argv[3]))
		f1 = 1;
	    else if (strlen(argv[1]) == strlen(argv[3]))
	    {
		if (strcmp(argv[3], argv[1]) > 0)
		{
		    sp(&h1, &h2);
		    sp(&t1, &t2);
		}
		else if (strcmp(argv[3], argv[1]) < 0)
		    f1 = 1;
	    }
	    else if (strlen(argv[1]) < strlen(argv[3]))
	    {
		sp(&h1, &h2);
		sp(&t1, &t2);
	    }
	}
*/

	int res_div; 

	switch(op)
	{
	    case '+':
		add(h1, t1, h2, t2, &res);
		
		if (f1)
		    sl_insert_at_first(&res, '-');

		print_list_single(res);
		break;
	    case '-':
		sub(h1, t1, h2, t2, &res);

		if (f1)
		    sl_insert_at_first(&res, '-');

		print_list_single(res);
		break;
	    case '/':
		res_div = divi(&op, op1, op2, argv, &h1, &t1, &h2, &t2, &res);
		printf("%d\n", res_div);	
		break;	
	    default:
		printf("invalid operator\n");
		return -1;
	}
    }
    return 0;
}

