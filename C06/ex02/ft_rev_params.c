/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:03:29 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/09/24 23:14:44 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc >= 1)
	{
		i = argc - 1;
		while (i != 0)
		{
			j = 0;
			while (argv[i][j])
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
}