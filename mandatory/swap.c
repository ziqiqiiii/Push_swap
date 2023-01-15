#include "../includes/push_swap.h"

void    swap(t_list **list, int s)
{
    t_list  *temp;
	t_list	*next;

	if (!(*list) || !(*list)->next)
		return ;
	temp = *list;
	*list = (*list)->next;
	next = (*list)->next;
	(*list)->next = temp;
	temp->next = next;
	if (s == 'a')
		ft_printf("sa\n");
	else if (s == 'b')
		ft_printf("sb\n");
	else
		ft_printf("ss\n");
	print_list(*list);
}

// void	push(t_list **from, t_list **pushto; int c)
// {
// 	t_list *temp;

// 	if (!(*from))
// 		return ;
// 	temp = *from;
// 	*from = (*from)->next;
// 	temp->next = *pushto;
// 	*pushto = temp;
// 	if (c == 'a')
// 		ft_printf("pa\n");
// 	else if ('b')
// 		ft_printf("pb\n");
// }

void	rotate_distributor(t_list **lista, t_list **listb, int c)
{
	if (c == 'a')
	{
		ft_printf("ra\n");
		rotate(lista);
	}
	else if (c == 'b')
	{
		ft_printf("rb\n");
		rotate(listb);
	}
	else
	{
		ft_printf("rr\n");
		rotate(lista);
		rotate(listb);
	}
}

void	rotate(t_list **list)
{
	t_list	*temp;
	t_list	*last;

	if (!(*list))
		return ;
	last = ft_lstlast(*list);
	temp = *list;
	*list = (*list)->next;
	temp->next = last->next;
	last->next = temp;
}