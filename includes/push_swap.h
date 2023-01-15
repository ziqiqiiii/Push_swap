#ifndef PUSH_SWAP_H
# 	define PUSH_SWAP_h

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../libft/libft.h"
#include "../ft_printf/ft_printf.h"

void	print_content(int	content);
void	print_list(t_list *list);

//operators
void    swap(t_list **list, int s);
void	rotate(t_list **list);
void	rotate_distributor(t_list **lista, t_list **listb, int c);

#endif