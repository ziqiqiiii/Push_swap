#include "../includes/push_swap_bonus.h"

int	error_checking(int argc, char **argv, t_list **a)
{
	if (argc < 2)
		exit (0);
	if (check_num(argc, argv, a) != 0)
	{
		ft_putstr_fd("Error:not number\n", 2);
		return (-1);
	}
	if (is_duplicate(*a) != 0)
	{
		ft_putstr_fd("Error: duplicate numbers\n", 2);
		return (-1);
	}
	// if (is_sorted(*a) == 0)
	// 	return (-1);
	return (0);
}
