/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:50:03 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/09/23 20:20:16 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	pow;
	int	tmp;

	pow = 1;
	tmp = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (pow <= power)
	{
		tmp *= nb;
		pow++;
	}
	return (tmp);
}
