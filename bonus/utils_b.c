#include "../includes/push_swap_bonus.h"

void	error_exit(t_list **a, t_list **b, char *op)
{
	free(op);
	if (*a != NULL)
		ft_lstclear(a, delete);
	if (*b != NULL)
		ft_lstclear(b, delete);
	ft_putstr_fd("Error\n", 2);
	exit (1);
}

void	free_twod(char **list)
{
	int	i;

	i = 0;
	while (list[i])
	{
		free(list[i]);
		i++;
	}
	free(list);
}

int	is_sorted(t_list *list)
{
	int	value;

	value = *(int *)list->content;
	while (list->next)
	{
		if (value > *(int *)list->next->content)
		{
			return (-1);
		}
		list = list->next;
		value = *(int *)list->content;
	}
	return (0);
}