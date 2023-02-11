#include "../includes/push_swap.h"

static unsigned int	countbits(void)
{
	int				max;
	unsigned int	count;

	count = 0;
	max = 500;
	while (max)
	{
		count++;
		max >>= 1;
	}
	return (count);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*head_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	head_a = *stack_a;
	size = 500;
	max_bits = countBits();
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *stack_a;
			if (((head_a->index >> i) & 1) == 1)
				rotate(stack_a, 'a');
			else
				push(stack_a, stack_b, 'b');
		}
		while (ft_lstsize(*stack_b) != 0)
			push(stack_b, stack_a, 'a');
		i++;
	}
}
