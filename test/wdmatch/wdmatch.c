/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:38:36 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/04 21:49:31 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i=0;
	while (*str)
	{
		i++;
		str++;
	}
	return i;
}

int main(int argc, char **argv)
{
	int i=0;
	int j = 0;
	int check=0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if(argv[1][i] == argv[2][j])
				{
					check++;
					break;
				}
				j++;
			}
			i++;
		}
		if (ft_strlen(argv[1]) == check)
		{
			i = 0;
			while (argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}

