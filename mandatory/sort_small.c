#include "../includes/push_swap.h"

t_list	*sort_three(t_list	*list, int	c)
{
	int	one;
	int	two;
	int	three;

	one = *(int *)list->content;
	two = *(int *)list->next->content;
	three = *(int *)list->next->next->content;
	if (one < two)
	{
		if (one < three)
		{
			reverse_rotate(&list, c);
			swap(&list, c);
		}
		else
			reverse_rotate(&list, c);
	}
	else
	{
		if (one < three)
			swap(&list, c);
		else
		{
			if (two < three)
				rotate(&list, c);
			else
			{
				swap(&list, c);
				reverse_rotate(&list, c);
			}
		}
	}
	return (list);
}