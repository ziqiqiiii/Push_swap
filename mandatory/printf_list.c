#include "../includes/push_swap.h"

void	print_content(void	*content)
{
	ft_printf("%i	", *((int *)content));
}

void	print_list(t_list *list)
{
	ft_lstiter(list, print_content);
	ft_printf("\n");
}

void	print_ab(t_list	*a, t_list	*b)
{
	ft_printf("\n\n");
	ft_printf("a\n");
	print_list(a);
	ft_printf("b\n");
	print_list(b);
	ft_printf("\n\n");
}
