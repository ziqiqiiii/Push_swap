#include "../includes/push_swap.h"

void	swap(t_list **list, int s)
{
	t_list	*temp;
	t_list	*next;

	if (!(*list) || !(*list)->next)
		return ;
	temp = *list;
	*list = (*list)->next;
	next = (*list)->next;
	(*list)->next = temp;
	temp->next = next;
	if (s == 'a')
		ft_putstr_fd("sa\n", 1);
	else if (s == 'b')
		ft_putstr_fd("sb\n", 1);
	else
		ft_putstr_fd("ss\n", 1);
}

void	push(t_list **from, t_list **pushto, int c)
{
	t_list	*temp;

	if (!(*from))
		return ;
	temp = *from;
	*from = (*from)->next;
	temp->next = *pushto;
	*pushto = temp;
	if (c == 'a')
		ft_putstr_fd("pa\n", 1);
	else if (c == 'b')
		ft_putstr_fd("pb\n", 1);
}

// void	r(t_list **lista, t_list **listb, int c)
// {
// 	if (c == 'a')
// 	{
// 		ft_ft_putstr_fd("ra\n"), 1;
// 		rotate(lista);
// 	}
// 	else if (c == 'b')
// 	{
// 		ft_ft_putstr_fd("rb\n"), 1;
// 		rotate(listb);
// 	}
// 	else
// 	{
// 		ft_ft_putstr_fd("rr\n"), 1;
// 		rotate(lista);
// 		rotate(listb);
// 	}
// }

void	rotate(t_list **list, int c)
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
	if (c == 'a')
		ft_putstr_fd("ra\n", 1);
	else if (c == 'b')
		ft_putstr_fd("rb\n", 1);
}

// void	rr(t_list **lista, t_list **listb, int c)
// {
// 	if (c == 'a')
// 	{
// 		ft_ft_putstr_fd("rra\n", 1);
// 		reverse_rotate(lista);
// 	}
// 	else if (c == 'b')
// 	{
// 		ft_ft_putstr_fd("rrb\n", 1);
// 		reverse_rotate(listb);
// 	}
// 	else
// 	{
// 		ft_ft_putstr_fd("rrr\n", 1);
// 		reverse_rotate(lista);
// 		reverse_rotate(listb);
// 	}
// }

void	reverse_rotate(t_list **list, int c)
{
	t_list	*prev_last;
	t_list	*last;

	if (!(*list))
		return ;
	prev_last = *list;
	last = ft_lstlast(*list);
	while (prev_last->next->next)
		prev_last = prev_last->next;
	prev_last->next = NULL;
	last->next = *list;
	*list = last;
	if (c == 'a')
		ft_putstr_fd("rra\n", 1);
	else if (c == 'b')
		ft_putstr_fd("rrb\n", 1);
}
