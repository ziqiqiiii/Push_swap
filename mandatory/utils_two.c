#include "../includes/push_swap.h"

int	abs(int	num)
{
	if (num < 0)
		return (-num);
	return (num);
}

int	range(int size)
{
	if (size <= 20)
		return (5);
	else if (size == 100 || size == 500)
		return (20);
	else
		return (size / 4);
}
