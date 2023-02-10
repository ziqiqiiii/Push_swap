#include "../includes/push_swap_bonus.h"

void	swap(t_list **list)
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
}

void	push(t_list **from, t_list **pushto)
{
	t_list	*temp;

	if (!(*from))
		return ;
	temp = *from;
	*from = (*from)->next;
	temp->next = *pushto;
	*pushto = temp;
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

void	reverse_rotate(t_list **list)
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
}
