/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:08:48 by tzi-qi            #+#    #+#             */
/*   Updated: 2023/03/10 17:08:49 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (error_checking(argc, argv, &a) != 0)
	{
		ft_lstclear(&a, delete);
		return (-1);
	}
	indexing(a);
	sort(&a, &b);
	ft_lstclear(&a, delete);
}

//operators (done)
// clear list (done)
// set valgrind (done)
//create two linked =-list and try out push ,rr and rrr
//parsing 
// -error checking (DONE)
// NEED TO UNDERSTAND WHY THEY USED LONG 
// WHEN WE'RE DEALING WITH  INT_MIN && INT_MAX
// -form two list
// -free string (done)

//sort small
//sort 3
//sort 5
//find median sort 5