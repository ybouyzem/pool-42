/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:53:59 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/10/03 19:15:36 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_double1(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (str[i] && i < pos)
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_double2(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if ((check_double1(argv[1], argv[1][i], i) == 0))
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (check_double2(argv[1], argv[2][i]) == 0)
			{
				if (check_double1(argv[2], argv[2][i], i) == 0)
				{
					write(1, &argv[2][i], 1);
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
