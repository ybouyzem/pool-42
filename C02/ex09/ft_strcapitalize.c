/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:37:15 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/09/18 17:27:10 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric( char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

int	ft_str_is_alpha(char c)
{
	int	valid;

	valid = 0;
	if (c >= 'a' && c <= 'z')
	{
		valid = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		valid = 1;
	}
	if (valid == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_char_to_upercase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
	{
		*c += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		ft_char_to_upercase(&str[i]);
		if (ft_str_is_alpha(str[i - 1]) == 0)
		{
			if (ft_str_is_numeric(str[i - 1]) == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
