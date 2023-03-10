/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:08:59 by tzi-qi            #+#    #+#             */
/*   Updated: 2023/03/10 17:09:00 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_content(void	*content)
{
	ft_printf("%i	", *((int *)content));
}

void	print_list(t_list *list)
{
	ft_lstiter(list, print_content);
	ft_printf("\n");
}

void	print_ab(t_list	*a, t_list	*b)
{
	ft_printf("\n\n");
	ft_printf("a\n");
	print_list(a);
	ft_printf("b\n");
	print_list(b);
	ft_printf("\n\n");
}
