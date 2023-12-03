/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 07:14:33 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/10/03 18:13:02 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_existing(char *str, char c, int pos)
{
	int i = 0;
	while (*str && i < pos)
	{
		if (*str == c)
			return 1;
		str++;
		i++;
	}
	return 0;
}

int main(int argc, char **argv)
{
	int	i;
	int	j;
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while(argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if (ft_check_existing(argv[1], argv[1][i], i) == 0)
					{
						write(1, &argv[1][i], 1);
						break;
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
