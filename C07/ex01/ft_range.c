/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 06:14:32 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/09/28 22:59:27 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	*original;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc((max - min) * sizeof(int));
	original = tab;
	if (tab == NULL)
		return (NULL);
	while (min <= max)
	{
		*tab = min;
		tab++;
		min++;
	}
	return (original);
}
