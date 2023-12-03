/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:29:25 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/09/24 00:37:55 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	f;
	int	i;

	i = 1;
	f = 1;
	if (nb < 0 || nb >= 2147483647)
	{
		return (0);
	}
	while (i <= nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}
