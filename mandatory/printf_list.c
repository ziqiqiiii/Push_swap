#include "../includes/push_swap.h"

void	print_content(int	content)
{
	ft_printf("%i\n", content);
}

void	print_list(t_list *list)
{
	ft_lstiter(list, (void *)print_content);
}