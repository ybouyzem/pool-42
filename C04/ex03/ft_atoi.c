/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:23:26 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/09/24 04:02:34 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_char_is_plus_minus(char c)
{
	if (c == '+' || c == '-')
		return (1);
	else
		return (0);
}

int	ft_char_is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	sign = 1;
	while (ft_char_is_space(str[i]) && str[i])
	{
		i++;
	}
	while (ft_char_is_plus_minus(str[i]) && str[i])
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_char_is_number(str[i]) && str[i])
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (sign * nb);
}
