/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:10:54 by tzi-qi            #+#    #+#             */
/*   Updated: 2023/03/10 17:10:54 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	checker(t_list **a, t_list **b)
{
	char	*op;

	op = get_next_line(0);
	while (op)
	{
		do_op(a, b, op);
		free(op);
		op = get_next_line(0);
	}
}

int	main(int argc, char **argv)
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
	checker(&a, &b);
	if (is_sorted(a) == 0 && b == NULL)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	ft_lstclear(&a, delete);
}
