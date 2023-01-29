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

//operators
void    swap(t_list **list, int s);
void	rotate(t_list **list);
void	rotate_distributor(t_list **lista, t_list **listb, int c);
void	reverse_rotate(t_list **list);
void	rrotate_distributor(t_list **lista, t_list **listb, int c);

//delete
void    delete(void *content);

//error_checking
int	    error_checking(int  argc, char **argv, t_list **a);
int	    is_duplicate(t_list *a);
int	    is_number(char **argv, t_list **a);

//fill_stack
t_list *fill_stack(int *num);

#endif