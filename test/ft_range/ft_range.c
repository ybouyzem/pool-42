/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:21:52 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/09/28 22:48:12 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	*ft_range(int start, int end) 
{
	int	*tab;
	int	size;
	int i;
	i = 0;
	size = end - start +1;
	if (end == start)
		return ((int*)malloc(sizeof(int)));
	tab = (int*)malloc(size*sizeof(int));
	while (start <= end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	return (tab);

	return 0;
}
int	main()
{
	int *result = ft_range(0, 0);
	int i=0;
	if (*result == 0)
	{
		printf("0");
		return 0;
	}
	while (i < 2)
	{	
		printf("%d", result[i]);
		i++;
	}
}
