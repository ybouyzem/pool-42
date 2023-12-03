/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:16:20 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/04 21:50:46 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	is_space(char c)
{
	if (c == ' ' || c == '\n')
		return 1;
	return 0;
}

int main(int argc, char **argv)
{
	int	i;
	int	l;
	int end;

	l = ft_strlen(argv[1]) - 1;
	i = 0;
	if (argc == 2)
	{
		while(is_space(argv[1][l - i]))
		{
			i++;
		}
		end =l - i;
		i = 0;
		while (is_space(argv[1][end - i]) == 0)
		{
			i++;
		}
		int begin = end - i + 1;
		
		while (begin <= end)
		{
			write(1, &argv[1][begin], 1);
			begin++;
		}
	}
	write(1, "\n", 1);
}

