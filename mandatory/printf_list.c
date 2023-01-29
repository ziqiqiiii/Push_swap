#include "../includes/push_swap.h"

void	print_content(void	*content)
{
	ft_printf("%i\n", *((int *)content));
}

void	print_list(t_list *list)
{
	ft_lstiter(list, print_content);
}