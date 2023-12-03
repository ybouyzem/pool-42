/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:45:43 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/09/29 12:52:52 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	long tmp = nb;
	if (tmp < 0)
	{
		write(1, "-", 1);
		tmp = tmp * -1;
	}
	if (tmp <= 9)
	{
		tmp = tmp + '0';
		write(1, &tmp, 1);
	}
	else
	{
		ft_putnbr(tmp/10);
		ft_putnbr(tmp%10);
	}
}
