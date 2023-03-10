/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:08:28 by tzi-qi            #+#    #+#             */
/*   Updated: 2023/03/10 17:08:29 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_num(int argc, char **argv, t_list **a)
{
	char	**nums;

	if (argc == 2)
	{
		nums = ft_split(argv[1], ' ');
		if (nums[1] == NULL)
		{
			free_twod(nums);
			exit (1);
		}
		if (is_number(nums, argc, a) != 0)
		{	
			free_twod(nums);
			return (-1);
		}
		free_twod(nums);
	}
	else
	{
		if (is_number(argv, argc, a) != 0)
			return (-1);
	}
	return (0);
}

static int	compare(char *atoi)
{
	int	i;

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

int	is_number(char **argv, int argc, t_list **a)
{
	int		c;
	long	nbr;
	t_list	*new;

	if (argc == 2)
		c = -1;
	else
		c = 0;
	while (argv[++c])
	{
		nbr = ft_atoi(argv[c]);
		if (nbr == 0)
		{
			if (compare(argv[c]) != 0)
				return (-1);
		}
		if (nbr < INT_MIN || nbr > INT_MAX)
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
//have to typecast before deredenecing
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

// if the fucntion is_sorted return (-1)
// means not sorted
// return (0) means sorted

int	is_sorted(t_list *list)
{
	int	value;

	value = *(int *)list->content;
	while (list->next)
	{
		if (value > *(int *)list->next->content)
		{
			return (-1);
		}
		list = list->next;
		value = *(int *)list->content;
	}
	return (0);
}
