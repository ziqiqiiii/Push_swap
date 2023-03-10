/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:08:41 by tzi-qi            #+#    #+#             */
/*   Updated: 2023/03/10 17:47:32 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	exec_insert_sort(t_list **a, t_list **b, int min, int max)
{
	int	i;
	int	j;

	i = less_steps(*a, min, max, ft_lstsize(*a));
	while (i == 0)
		i = less_steps(*a, min++, max, ft_lstsize(*a));
	if (i < 0)
	{
		j = -1;
		while (++j < abs(i))
			reverse_rotate(a, 'a');
		push(a, b, 'b');
	}
	else
	{
		j = 0;
		while (++j < i)
			rotate(a, 'a');
		push(a, b, 'b');
	}
}

void	exec_reverse_insert(t_list **a, t_list **b, int size)
{
	int	dis;

	dis = get_distance_index(b, ft_lstsize(*b));
	if ((dis > (ft_lstsize(*b) / 2)) && (dis != 1))
	{
		dis = size + 1 - dis;
		dis *= -1;
	}
	if (dis > 0)
	{
		while (--dis > 0)
			rotate(b, 'b');
		push(b, a, 'a');
	}
	else
	{
		while (++dis < 1)
			reverse_rotate(b, 'b');
		push(b, a, 'a');
	}
}
