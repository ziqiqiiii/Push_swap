#include "../includes/push_swap_bonus.h"

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
	// print_ab(a, b);
	ft_lstclear(&a, delete);
}