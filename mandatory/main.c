#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
	t_list *list;
	t_list	*new;
	t_list	*third;

	if (error_checking(argc, argv) != 0)
		return (-1);
	list = ft_lstnew((int *)1);
	new = ft_lstnew((int *)2);
	third = ft_lstnew((int	*)5);
	ft_lstadd_back(&list, new);
	ft_lstadd_back(&list, third);
	// print_list(list);
	// ft_printf("\nafter swap\n");
    swap(&list, 'b');
	// ft_printf("\nafter rotate\n");
	rotate(&list);
	// print_list(list);
	// ft_printf("\nafter reverse rotate\n");
	reverse_rotate(&list);
	// print_list(list);
	ft_lstclear(&list, delete);

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