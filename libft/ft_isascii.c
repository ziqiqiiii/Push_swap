/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:39:22 by tzi-qi            #+#    #+#             */
/*   Updated: 2022/05/22 16:52:39 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(unsigned int a)
{
	return (a > 0 && a <= 127);
}
// if (a >= 0 && a <= 127)
	// 	return (1);
	// else
	// 	return (0);