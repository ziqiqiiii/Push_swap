#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		i;

	a = NULL;
	b = NULL;
	if (error_checking(argc, argv, &a) != 0)
	{
		ft_lstclear(&a, delete);
		return (-1);
	}
	indexing(a);
	sort(&a, &b);
    // print_ab(a, b);
	ft_lstclear(&a, delete);
}

//operators (done)
// clear list (done)
// set valgrind (done)
//create two linked =-list and try out push ,rr and rrr
//parsing 
// -error checking (DONE)
// NEED TO UNDERSTAND WHY THEY USED LONG 
// WHEN WE'RE DEALING WITH  INT_MIN && INT_MAX
// -form two list
// -free string (done)

//sort small
//sort 3
//sort 5
//find median sort 5