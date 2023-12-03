/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 04:53:49 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/09/17 15:17:55 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			count ++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			count ++;
		}
		i++;
	}
	if (count == i)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
