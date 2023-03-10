/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps_cal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:09:24 by tzi-qi            #+#    #+#             */
/*   Updated: 2023/03/10 17:09:26 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	min_steps(t_list *list, int i, int size, int max)
{
	int	dis;

	dis = get_distance_index(&list, i);
	while (dis == 0 && i <= max)
	{
		dis = get_distance_index(&list, i++);
		if (dis != 0)
			break ;
	}
	if (dis > (size / 2) + 1)
	{
		dis = size + 1 - dis;
		dis *= -1;
	}
	return (dis);
}

//less_size function find min steps
//to push to stack b
//input the range of the chunk into func
//-negative value means rra
//positive value means ra

int	less_steps(t_list *list, int min, int max, int size)
{
	int		dis;
	int		i;
	int		j;

	i = min;
	dis = min_steps(list, i, size, max);
	while (i <= max)
	{
		j = min_steps(list, i, size, max);
		if (abs(dis) > abs(j))
		{
			if (j != 0)
				dis = j;
		}
		i++;
	}
	return (dis);
}
