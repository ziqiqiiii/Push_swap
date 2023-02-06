#include "../includes/push_swap.h"

void    sort_small(t_list **a, t_list **b, int size)
{
    if (size == 2)
        sort_two(a, 'a');
    else if (size == 3)
        sort_three(a, 'a');
    else if (size == 4)
        sort_four(a, b);
    else if (size == 5)
        sort_five(a, b);
}

void    sort(t_list **a, t_list **b)
{
    int size;

    size = ft_lstsize(*a);
    if (size <= 5)
        sort_small(a, b, size);
	else
		insertion_sort(a, b, size);
}

//split the chunk into size of 5
//push 1 - 5 to next chunk
//push it back

//less_size function find min steps
//to push to stack b
//input the range of the chunk into func
//-negative value means rra
//positive value means ra
int		less_steps(t_list *list, int min, int max, int size)
{
	int		dis;
	int		i;
	int		j;

	i = min;
	dis = get_distance_index(&list, i);
	if (dis > (size / 2) + 1)
	{
		dis = size + 1- dis;
		dis *= -1;
		// printf("dis %i\n",? dis);
	}
	i++;
	while (i <=  max)
	{
		// printf("i %i\n", i);
		j = get_distance_index(&list, i);
		// printf("j %i\n", j);
		if (j > (size / 2) + 1)
		{
			j = size + 1 - j;
			j *= -1;
			// printf("j in the if %i\n", j);
		}
		else
			j -= 1;
		// printf("dis = [%i], j = [%i]\n", abs(dis), abs(j));
		if (abs(dis) > abs(j))
		{
			dis = j;
		}
		i++;
	}
	return (dis);
}

void	insertion_sort(t_list **a, t_list **b, int	size)
{
	int	i;
	int	j;
	int	k;

	// i = get_distance_index(a, 1);
	// j = get_distance_index(a, 2);
	// k = get_distance_index(a, 3);
	printf("%i\n", less_steps(*a, 1, 5, size));
	rotate(a, 'a');
	push(a, b, 'a');
	// rotate(a, 'a');
	// push(a, b, 'a');
	printf("\n\n");
	print_ab(*a, *b);
	printf("\n\n");
	printf("%i\n", less_steps(*a, 1, 5, size));
}