#ifndef PUSH_SWAP_H
# 	define PUSH_SWAP_h

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../libft/libft.h"
#include "../ft_printf/ft_printf.h"

//printf
void	print_content(void *content);
void	print_list(t_list *list);
void	print_ab(t_list	*a, t_list	*b);

//operators
void    swap(t_list **list, int s);
void	rotate(t_list **list, int c);
void	push(t_list **from, t_list **pushto, int c);
void	r(t_list **lista, t_list **listb, int c);
void	reverse_rotate(t_list **list, int c);
void	rr(t_list **lista, t_list **listb, int c);

//delete
void    delete(void *content);

//error_checking
int	    error_checking(int  argc, char **argv, t_list **a);
int	    is_duplicate(t_list *a);
int	    is_number(char **argv, t_list **a);
int	    is_sorted(t_list *list);

//utlis.c
void    indexing(t_list *list);
int	    get_distance_value(t_list	**list, int	min);
int	    get_distance_index(t_list	**list, int	num);
int     find_min(t_list *list);
// int	    find_max(t_list *list);
int	    abs(int	num);
// int	    next_min(t_list *list);


//sort_small
void	sort_two(t_list **list, int	c);
void	sort_three(t_list	**list, int	c);
void	sort_four(t_list **a, t_list **b);
void	sort_five(t_list **a, t_list **b);

//sort
void    sort(t_list **a, t_list **b);
void    sort_small(t_list **a, t_list **b, int size);
void	insertion_sort(t_list **a, t_list **b, int	size);

#endif