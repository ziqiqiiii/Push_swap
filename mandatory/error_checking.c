#include "../includes/push_swap.h"
#include <stdint.h>

int	error_checking(int  argc, char **argv, t_list **a)
{
    if (argc <= 2)
	{
		ft_putstr_fd("Erorr: wrong number of arguments\n", 2);
		return (-1);
	}
	if (is_number(argv, a) != 0)
	{
		ft_putstr_fd("Erorr:not number\n", 2);
		return (-1);
	}
	if (is_duplicate(*a) != 0)
	{
		ft_putstr_fd("Erorr: duplicate numbers\n", 2);
		return (-1);
	}
	print_list(*a);
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

int	is_number(char **argv, t_list **a)
{
	int		c;
	long 	nbr;
	t_list	*new;

	c = 0;
	while (argv[++c])
	{
		nbr = ft_atoi(argv[c]);
		if (nbr == 0)
		{
			if (compare(argv[c]) != 0)
				return (-1);
		}
		if (nbr < INT_MIN || nbr > 	INT_MAX)
			return (-1);
		new = ft_lstnew(NULL);
		new->content = malloc(sizeof(int));
		*((int *)new->content) = nbr;
		ft_lstadd_back(a, new);
	}
	return (0);
}

//ft_lstnew(NULL) is to let the void ptr in stuck
//to point to NULL
//Since it's a void pointer
//so have to malloc the sizeof the data type that the pointer
//point to
//in this case, int
//this is how a use generic linked list that
//we coded in libft

int	is_duplicate(t_list *a)
{
	t_list	*tmp;
	int		i;
	int		j;
	
	while (a->next != NULL)
	{
		i = *(int *)a->content;
		tmp = a->next;
		while (tmp != NULL)
		{
			j = *(int *)tmp->content;
			if (i == j)
				return (-1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}
