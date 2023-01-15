#include "../includes/push_swap.h"

int main(void)
{
	t_list *list;
	t_list	*new;
	t_list	*third;

	list = ft_lstnew((int *)1);
	new = ft_lstnew((int *)2);
	third = ft_lstnew((int	*)5);
	ft_lstadd_back(&list, new);
	ft_lstadd_back(&list, third);
	print_list(list);
	ft_printf("\nafter swap\n");
    swap(&list, 'b');
	rotate(&list, 'a');
	ft_printf("\nafter rotate\n");
	print_list(list);
}

//operators
//create two linked =-list and try out push ,rr and rrr
//parsing 
// -error checking
// -form two list
// -free string