/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 01:00:58 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/09/22 04:08:49 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
		char ALPHA[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int	i;
		int	j;
		int	z;
		int	cpt;

		cpt = 0;
		i = 0;
		z = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = 0;
				while (alpha[j])
				{
					if (argv[1][i] == alpha[j])
					{
						while (cpt <= j)
						{
							write(1, &alpha[j], 1);
							cpt++;
						}
						cpt = 0;
					}
					j++;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				z = 0;
				while(ALPHA[z])
				{
					if (argv[1][i] == ALPHA[z])
					{
						while (cpt <= z)
						{
							write(1, &ALPHA[z], 1);
							cpt ++;
						}
						cpt++;
					}
					z++;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return 0;
}
