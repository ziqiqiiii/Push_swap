#ifndef PUSH_SWAP_BONUS_H
#   define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

//operators.c
void	swap(t_list **list, int s);
void	rotate(t_list **list, int c);
void	push(t_list **from, t_list **pushto, int c);
void	reverse_rotate(t_list **list, int c);

//error_checking.c
int	error_checking(int argc, char **argv, t_list **a);

//error_check_utils.c
int		check_num(int argc, char **argv, t_list **a);
int		is_number(char **argv, int argc, t_list **a);
int		is_duplicate(t_list *a);

//delete.c
void	delete(void *content);

//utils.c
void	free_twod(char **list);

//printf.c
void	print_content(void *content);
void	print_list(t_list *list);
void	print_ab(t_list	*a, t_list	*b);

#endif
