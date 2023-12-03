/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:48:57 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/09/23 06:17:33 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
int	ft_check_decimal(char *base)
{
	int	i;

	i = 0;
	while (base[i] == "0123456789"[i] && base[i] && "0123456789"[i])
		i++;
	return (base[i] - "0123456789"[i]);
}

int	ft_check_binary(char *base)
{
	int	i;

	i = 0;
	while (base[i] == "01"[i] && base[i] && "01"[i])
		i++;
	return (base[i] - "01"[i]);
}

int	ft_check_hexadecimal(char *base)
{
	int	i;

	i = 0;
	while (base[i] == "0123456789ABCDEF"[i] && base[i] && "0123456789ABCDEF"[i])
		i++;
	return (base[i] - "0123456789ABCDEF"[i]);
}

int	ft_check_octal(char *base)
{
	int	i;

	i = 0;
	while (base[i] == "01234567"[i] && base[i] && "01234567"[i])
		i++;
	return (base[i] - "01234567"[i]);
}
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = ft_strlen(base);
	if (size == 0 || size == 1)
		return (0);
	while (base[i])
	{
		if (base[i] <= 32 || base[i] >= 127 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (j < size)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	size;
	long	nb;

	nb = nbr;
	size = ft_strlen(base);
	if (check_base(base) == 1)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb < size)
		{
			write (1, &base[nb], 1);
		}
		if (nb >= size)
		{
			ft_putnbr_base(nb / size, base);
			ft_putnbr_base(nb % size, base);
		}
	}
}
