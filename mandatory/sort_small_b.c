/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:09:07 by tzi-qi            #+#    #+#             */
/*   Updated: 2023/03/10 17:09:08 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	reverse_sorted(t_list *list)
{
	int	value;

	value = *(int *)list->content;
	while (list->next)
	{
		if (value < *(int *)list->next->content)
			return (-1);
		list = list->next;
		value = *(int *)list->content;
	}
	return (0);
}

void	sort_three_b(t_list **a, t_list **b)
{
	int	max;

	max = get_distance_value(b, find_max(*b));
	if (max == 2)
		swap(b, 'b');
	else if (max == 3)
		reverse_rotate(b, 'b');
	if (reverse_sorted(*b) == 0)
		return ;
	push(b, a, 'a');
	sort_two(b, 'b');
	push(b, a, 'b');
}

void	sort_four_b(t_list **a, t_list **b)
{
	int	max;

	max = get_distance_value(b, find_max(*b));
	if (max == 2)
		swap(b, 'b');
	else if (max == 3)
	{
		rotate(b, 'b');
		rotate(b, 'b');
	}
	else if (max == 4)
		reverse_rotate(b, 'b');
	if (reverse_sorted(*b) == 0)
		return ;
	push(b, a, 'a');
	sort_three_b(a, b);
	push(a, b, 'b');
}

void	sort_five_b(t_list **a, t_list **b)
{
	int	max;

	max = get_distance_value(b, find_max(*b));
	if (max == 2)
		swap(b, 'b');
	else if (max == 3)
	{
		rotate(b, 'b');
		rotate(b, 'b');
	}
	else if (max == 4)
	{
		reverse_rotate(b, 'b');
		reverse_rotate(b, 'b');
	}
	else if (max == 5)
		reverse_rotate(b, 'b');
	if (reverse_sorted(*b) == 0)
		return ;
	push(b, a, 'a');
	sort_four_b(a, b);
	push(a, b, 'b');
}

void	sort_small_b(t_list **a, t_list **b, int sizeb)
{
	if (sizeb == 2)
		sort_two(b, 'b');
	else if (sizeb == 3)
		sort_three_b(a, b);
	else if (sizeb == 4)
		sort_four_b(a, b);
	else
		sort_five_b(a, b);
}
