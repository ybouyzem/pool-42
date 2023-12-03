/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:06:56 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/10/03 17:05:08 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strs_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	s = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
		}
		s += j;
		i++;
	}
	i = 0;
	while (sep[i])
	{
		i++;
	}
	i = i * (size - 1);
	s += i;
	return (s);
}

void	ft_strcat(int *pos, char *dest, char *src)
{
	while (*src)
	{
		dest[*pos] = *src;
		*pos = *pos + 1;
		src++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tmp;
	int		i;
	int		length;
	int		z;
	int		pos;

	pos = 0;
	i = 0;
	if (size == 0)
		return ((char *)malloc(1));
	length = ft_strs_len(size, strs, sep);
	tmp = (char *)malloc(length + 1);
	while (i < size)
	{
		ft_strcat(&pos, tmp, strs[i]);
		if (i < size - 1)
		{
			z = 0;
			while (sep[z])
				tmp[pos++] = sep[z++];
		}
		i++;
	}
	tmp[pos] = '\0';
	return (tmp);
}
