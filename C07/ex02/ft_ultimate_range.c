/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 08:41:24 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/10/01 20:37:31 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	size;

	size = max - min;
	i = 0;
	if (size <= 0)
	{
		*range = 0;
		return (0);
	}
	tab = (int *)malloc((size - 1) * sizeof(int));
	if (tab == NULL)
		return (-1);
	while (i < size)
	{
		tab[i] = min;
		min ++;
		i++;
	}
	*range = tab;
	return (size);
}
