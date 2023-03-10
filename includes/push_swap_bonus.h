/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:11:28 by tzi-qi            #+#    #+#             */
/*   Updated: 2023/03/10 17:11:29 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include "../get_next_line/get_next_line.h"

//operators.c
void	swap(t_list **list);
void	rotate(t_list **list);
void	push(t_list **from, t_list **pushto);
void	reverse_rotate(t_list **list);

//error_checking.c
int		error_checking(int argc, char **argv, t_list **a);

//error_check_utils.c
int		check_num(int argc, char **argv, t_list **a);
int		is_number(char **argv, int argc, t_list **a);
int		is_duplicate(t_list *a);

//delete.c
void	delete(void *content);

//utils.c
void	free_twod(char **list);
int		is_sorted(t_list *list);
void	error_exit(t_list **a, t_list **b, char *op);

//printf.c
void	print_content(void *content);
void	print_list(t_list *list);
void	print_ab(t_list	*a, t_list	*b);

//do_op.c
void	do_op(t_list **a, t_list **b, char *op);
void	do_op_push(t_list **a, t_list **b, char *op);
void	do_op_rotate(t_list **a, t_list **b, char *op);
void	do_op_swap(t_list **a, t_list **b, char *op);

#endif
