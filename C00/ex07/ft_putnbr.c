/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:50:05 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/09/14 16:17:53 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	s;
	int		tmp;
	int		rest;
	int		reverse;

	tmp = nb;
	reverse = 0;
	while (tmp != 0)
	{
		rest = tmp % 10;
		reverse = reverse * 10 + rest;
		tmp /= 10;
	}
	tmp = reverse;
	while (tmp != 0)
	{
		rest = tmp % 10;
		s = rest + '0';
		write(1, &s, 1);
		tmp /= 10;
	}
}
