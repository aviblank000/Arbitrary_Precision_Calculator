#include "cal.h"

int my_atoi(const char *str, Dlist **head, Dlist **tail)
{
    int i,num = 0;
    
    if ((str[0] >= '0' && str[0] <= '9') || str[0] == '-' || str[0] == '+')
    {
        i = 0;
        if (str[0] == '-' || str[0] == '+')
            i = 1;
        for ( ; str[i] != '\0'; i++)
        {
            if (str[i] >= 48 && str[i] <= 57)
            {
                num = (str[i] - '0');
		dl_insert_last(head, tail, num);
                continue;
            }
	    else
	    {
		printf("Invalid input\n");
		return FAILURE;
	    }
        }
        return SUCCESS;
    }
    else
        return FAILURE;
}
