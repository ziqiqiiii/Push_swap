/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:11:24 by tzi-qi            #+#    #+#             */
/*   Updated: 2023/03/10 17:11:25 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# 	define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

//printf.c
void	print_content(void *content);
void	print_list(t_list *list);
void	print_ab(t_list	*a, t_list	*b);

//operators.c
void	swap(t_list **list, int s);
void	rotate(t_list **list, int c);
void	push(t_list **from, t_list **pushto, int c);
// void	r(t_list **lista, t_list **listb, int c);
void	reverse_rotate(t_list **list, int c);
// void	rr(t_list **lista, t_list **listb, int c);

//delete.c
void	delete(void *content);

//error_checking.c
int		error_checking(int argc, char **argv, t_list **a);

//error_check_utils.c
int		check_num(int argc, char **argv, t_list **a);
int		is_duplicate(t_list *a);
int		is_number(char **argv, int argc, t_list **a);
int		is_sorted(t_list *list);

//utlis.c
void	indexing(t_list *list);
int		get_distance_value(t_list **list, int min);
int		get_distance_index(t_list **list, int num);
int		find_min(t_list *list);
int		find_max(t_list *list);
// int	    next_min(t_list *list);

//utils_two.c
int		abs(int num);
int		range(int size);
void	free_twod(char **list);

//sort_small.c
void	sort_two(t_list **list, int c);
void	sort_three(t_list **list, int c);
void	sort_four(t_list **a, t_list **b);
void	sort_five(t_list **a, t_list **b);

//sort.c
void	sort(t_list **a, t_list **b);
void	sort_small(t_list **a, t_list **b, int size);
void	insertion_sort(t_list **a, t_list **b, int size);
void	reverse_insert(t_list **a, t_list **b, int size);

//sort_small_b.c
void	sort_small_b(t_list **a, t_list **b, int sizeb);
void	sort_three_b(t_list **a, t_list **b);
void	sort_four_b(t_list **a, t_list **b);
void	sort_five_b(t_list **a, t_list **b);
int		reverse_sorted(t_list *list);

//steps_cal.c
int		less_steps(t_list *list, int min, int max, int size);
int		min_steps(t_list *list, int i, int size, int max);

//execurion_sort.c
void	exec_insert_sort(t_list **a, t_list **b, int min, int max);
void	exec_reverse_insert(t_list **a, t_list **b, int size);

//radix.c
void	radix_sort(t_list **stack_a, t_list **stack_b);
#endif
