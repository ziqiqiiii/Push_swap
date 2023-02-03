#include "../includes/push_swap.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (error_checking(argc, argv, &a) != 0)
	{
		ft_lstclear(&a, delete);
		return (-1);
	}
	indexing(a);
	// printf("before sort 3\n");
	// print_list(a);
	a = sort_three(a, 'a');
	// printf("\nafter\n");
    // print_list(a);
	// printf("\n");
    // printf("\n");
    // print_list(b);
	// ft_lstclear(&a, delete);
}

//operators (done)
// clear list (done)
// set valgrind (done)
//create two linked =-list and try out push ,rr and rrr
//parsing 
// -error checking (DONE)
// NEED TO UNDERSTAND WHY THEY USED LONG WHEN WE'RE DEALING WITH  INT_MIN && INT_MAX
// -form two list
// -free string (done)

//sort small
//sort 3
//sort 5