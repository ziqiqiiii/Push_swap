/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:42:05 by tzi-qi            #+#    #+#             */
/*   Updated: 2022/05/23 20:02:26 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//all_number is just to loop through 
//whether the remaining is numbers
int	all_number(const char	*str, int i)
{
	int	r;

	r = i - 1;
	while (str[++r])
	{
		if (ft_isdigit(str[r]) == 0)
			return (-1);
	}
	return (0);
}

long ft_atoi(const char *str)
{
	int	i;
	int	negative;
	long result;

	i = 0;
	negative = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	if (all_number(str, i) != 0)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	result *= negative;
	return (result);
}
