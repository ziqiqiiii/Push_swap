/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:09:37 by tzi-qi            #+#    #+#             */
/*   Updated: 2023/03/10 17:09:37 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_min(t_list *list)
{
	int		min;
	t_list	*tmp;

	min = *(int *)list->content;
	tmp = list;
	while (list)
	{
		if (min > *(int *)list->content)
		{
			min = *(int *)list->content;
			tmp = list;
		}
		list = list->next;
	}
	tmp->index = 1;
	return (min);
}

void	indexing(t_list *list)
{
	t_list	*max;
	t_list	*tmp;
	int		index;
	int		value;

	index = ft_lstsize(list) + 1;
	value = find_min(list);
	while (--index > 0)
	{
		tmp = list;
		value = find_min(list);
		while (tmp)
		{
			if (value < *(int *)tmp->content && tmp->index == 0)
			{
				value = *(int *)tmp->content;
				max = tmp;
			}
			tmp = tmp->next;
		}
		if (max->index == 0)
			max->index = index;
	}
}

//get_distance return the distance from
//the start to the min value
int	get_distance_value(t_list	**list, int min)
{
	int		i;
	t_list	*tmp;

	tmp = *list;
	i = 1;
	while (tmp)
	{
		if (*(int *)tmp->content == min)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	get_distance_index(t_list	**list, int num)
{
	int		i;
	t_list	*tmp;

	tmp = *list;
	i = 1;
	while (tmp)
	{
		if (tmp->index == num)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	find_max(t_list *list)
{
	int	i;

	i = *(int *)list->content;
	list = list->next;
	while (list)
	{
		if (i < *(int *)list->content)
			i = *(int *)list->content;
		list = list->next;
	}
	return (i);
}

//next_min return the second smallest
//num
// int	next_min(t_list *list)
// {
// 	int		min;
// 	int		i;
// 	t_list	*head;
// 	t_list	*new;

// 	min = find_min(list);
// 	head = NULL;
// 	while (list)
// 	{
// 		i = *(int *)list->content;
// 		if (i != min)
// 		{
// 			new = ft_lstnew(NULL);
// 			new->content = malloc(sizeof(int));
// 			*(int*)new->content = i;
// 			ft_lstadd_back(&head, new);
// 		}
// 		list = list->next;
// 	}
// 	min = find_min(head);
// 	ft_lstclear(&head, delete);
// 	return (min);
// }
