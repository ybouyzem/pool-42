/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:24:34 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/09/29 01:11:56 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int	**range, int min, int max)
{
	int	*tab;
	int	size;
	if (min >= max)
	{
		*tab = NULL;
		return 0;
	}
	size = max - min;
	tab = (int*)malloc(size*sizeof(int));
	while (*tab < max)
	{
		*tab = min;
		min ++;
		tab++;
	}
	range = &tab;
	return size;
}
