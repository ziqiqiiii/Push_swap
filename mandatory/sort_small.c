/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:09:13 by tzi-qi            #+#    #+#             */
/*   Updated: 2023/03/10 17:09:14 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_two(t_list **list, int c)
{
	int	one;
	int	two;

	one = *(int *)(*list)->content;
	two = *(int *)(*list)->next->content;
	if (c == 'a')
	{
		if (one > two)
			swap(list, c);
	}
	else if (c == 'b')
	{
		if (two > one)
			swap(list, c);
	}
}

static	void	one_smaller_than_two(t_list **list, int one, int three, int c)
{
	if (one < three)
	{
		reverse_rotate(list, c);
		swap(list, c);
	}
	else
		reverse_rotate(list, c);
}

void	sort_three(t_list **list, int c)
{
	int	one;
	int	two;
	int	three;

	one = *(int *)(*list)->content;
	two = *(int *)(*list)->next->content;
	three = *(int *)(*list)->next->next->content;
	if (one < two)
		one_smaller_than_two(list, one, three, c);
	else
	{
		if (one < three)
			swap(list, c);
		else
		{
			if (two < three)
				rotate(list, c);
			else
			{
				swap(list, c);
				reverse_rotate(list, c);
			}
		}
	}
}

void	sort_four(t_list **a, t_list **b)
{
	unsigned int	i;

	i = get_distance_value(a, find_min(*a));
	if (i == 2)
		swap(a, 'a');
	else if (i == 3)
	{
		rotate(a, 'a');
		rotate(a, 'a');
	}
	else if (i == 4)
		reverse_rotate(a, 'a');
	if (is_sorted(*a) == 0)
		return ;
	push(a, b, 'b');
	sort_three(a, 'a');
	push(b, a, 'a');
}

void	sort_five(t_list **a, t_list **b)
{
	int	i;

	i = get_distance_value(a, find_min(*a));
	if (i == 2)
		rotate(a, 'a');
	else if (i == 3)
	{
		rotate(a, 'a');
		rotate(a, 'a');
	}
	else if (i == 4)
	{
		reverse_rotate(a, 'a');
		reverse_rotate(a, 'a');
	}
	else if (i == 5)
		reverse_rotate(a, 'a');
	if (is_sorted(*a) == 0)
		return ;
	push(a, b, 'b');
	sort_four(a, b);
	push(b, a, 'a');
}
