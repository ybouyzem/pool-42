/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:19:09 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/10/04 17:32:29 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	count_words(char *str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 1;
	if (str[i] == '\0')
		return (0);
	while (str[i] && is_space(str[i]))
	{
		i++;
	}
	while (str[i])
	{
		while (is_space(str[i]))
		{
			if (str[i + 1] >= '!' && str[i + 1] <= '~')
				nbr++;
			i++;
		}
		i++;
	}
	return (nbr);
}

int main()
{
	char str[]="   Hello 	world    me";
	int nbr = count_words(str);
	printf("%d", nbr);
}
