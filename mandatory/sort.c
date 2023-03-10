/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:09:18 by tzi-qi            #+#    #+#             */
/*   Updated: 2023/03/10 17:47:02 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_small(t_list **a, t_list **b, int size)
{
	if (size == 2)
		sort_two(a, 'a');
	else if (size == 3)
		sort_three(a, 'a');
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
}

void	sort(t_list **a, t_list **b)
{
	int	sizea;

	sizea = ft_lstsize(*a);
	if (sizea <= 5)
		sort_small(a, b, sizea);
	else if (sizea == 500)
		radix_sort(a, b);
	else
		insertion_sort(a, b, sizea);
}

//split the chunk into size of 5
//push 1 - 5 to next chunk
//push it back

void	reverse_insert(t_list **a, t_list **b, int size)
{
	int	max;
	int	dis;

	max = size;
	while (size > 0)
	{
		exec_reverse_insert(a, b, size);
		size--;
	}
	if (is_sorted(*a) != 0)
		sort(a, b);
	return ;
}

void	insertion_sort(t_list **a, t_list **b, int size)
{
	int	k;
	int	min;
	int	max;
	int	ran;

	ran = range(size);
	min = 1;
	max = min + ran;
	while (max <= size)
	{
		k = -1;
		while (++k < max - min + 1)
			exec_insert_sort(a, b, min, max);
		min = max + 1;
		max = min + ran;
	}
	if (ft_lstsize(*a) != 0 && is_sorted(*a) != 0)
		sort(a, b);
	reverse_insert(a, b, ft_lstsize(*b));
	if (is_sorted(*a) == 0)
		return ;
}
