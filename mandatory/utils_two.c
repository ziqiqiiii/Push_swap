#include "../includes/push_swap.h"

int	abs(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

int	range(int size)
{
	if (size <= 20)
		return (5);
	else if (size == 100)
		return (20);
	else if (size == 500)
		return (26);
	else
		return (size / 4);
}

void	free_twod(char **list)
{
	int	i;

	i = 0;
	while (list[i])
	{
		free(list[i]);
		i++;
	}
	free(list);
}
