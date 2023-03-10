/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:10:41 by tzi-qi            #+#    #+#             */
/*   Updated: 2023/03/10 17:10:42 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	do_op(t_list **a, t_list **b, char *op)
{
	if (ft_strncmp(op, "\n", 1) == 0)
		error_exit(a, b, op);
	else if (ft_strncmp(op, "rra\n", 4) == 0)
	{
		reverse_rotate(a);
		return ;
	}
	else if (ft_strncmp(op, "rrb\n", 4) == 0)
	{
		reverse_rotate(b);
		return ;
	}
	else if (ft_strncmp(op, "rrr\n", 4) == 0)
	{
		reverse_rotate(a);
		reverse_rotate(b);
		return ;
	}
	do_op_rotate(a, b, op);
}

void	do_op_rotate(t_list **a, t_list **b, char *op)
{
	if (ft_strncmp(op, "ra\n", 3) == 0)
	{
		rotate(a);
		return ;
	}
	else if (ft_strncmp(op, "rb\n", 3) == 0)
	{
		rotate(b);
		return ;
	}
	else if (ft_strncmp(op, "rr\n", 3) == 0)
	{
		rotate(b);
		rotate(a);
		return ;
	}
	do_op_push(a, b, op);
}

void	do_op_push(t_list **a, t_list **b, char *op)
{
	if (ft_strncmp(op, "pb\n", 3) == 0)
	{
		push(a, b);
		return ;
	}
	else if (ft_strncmp(op, "pa\n", 3) == 0)
	{
		push(b, a);
		return ;
	}
	do_op_swap(a, b, op);
}

void	do_op_swap(t_list **a, t_list **b, char *op)
{
	if (ft_strncmp(op, "sa\n", 3) == 0)
	{
		swap(a);
		return ;
	}
	else if (ft_strncmp(op, "sb\n", 3) == 0)
	{
		swap(b);
		return ;
	}
	else if (ft_strncmp(op, "ss\n", 3) == 0)
	{
		swap(a);
		swap(b);
		return ;
	}
	else
		error_exit(a, b, op);
}
