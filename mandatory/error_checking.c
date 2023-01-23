#include "../includes/push_swap.h"
#include <stdint.h>

int	error_checking(int  argc, char **argv)
{
	int	*numbers;

	numbers = malloc(sizeof(int *) * argc);
	numbers[argc - 1] = '\0';
    if (argc < 2)
	{
		free(numbers);
		ft_putstr_fd("Erorr: wrong number of arguments\n", 2);
		return (-1);
	}
	if (is_number(argv, numbers) != 0)
	{
		free(numbers);
		ft_putstr_fd("Erorr:not number\n", 2);
		return (-1);
	}
	if (is_duplicate(numbers) != 0)
	{
		free(numbers);
		ft_putstr_fd("Erorr: duplicate numbers\n", 2);
		return (-1);
	}
	free(numbers);
	return (0);
}

static int	compare(char *atoi)
{
	int i;

	i = -1;
	while (atoi[++i])
	{
		if (atoi[i] != 48)
			return (-1);
	}
	return (0);
}

//ft_atoi changed to return a long number
//use long is because it Can hold integers of range -9,223,372,036,854,775,808 
//to 9,223,372,036,854,775,807
//which is more than INT_MIN (-2147483648)
//and INT_MAX (+2147483647)
int	is_number(char **argv, int	*numbers)
{
	int c;
	long nbr;

	c = 0;
	while (argv[++c] != NULL)
	{
		nbr = ft_atoi(argv[c]);
		if (nbr == 0)
		{
			if (compare(argv[c]) != 0)
				return (-1);
		}
		if (nbr < INT_MIN || nbr > 	INT_MAX)
			return (-1);
		numbers[c - 1] = ft_atoi(argv[c]);
	}
	return (0);
}

int	is_duplicate(int *numbers)
{
	int	one;
	int	two;

	one = -1;
	while(numbers[++one])
	{
		two = -1;
		while(++two != one)
		{
			if (numbers[two] == numbers[one])
				return (-1);
		}
	}
	return (0);
}
