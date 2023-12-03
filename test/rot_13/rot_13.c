/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 04:27:05 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/09/22 05:38:33 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	alpha[] = "abcdefghijklmnopqrstuvwxyz";
		char	ALPHA[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int	i;
		int	result;
		int	tmp;
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				result = (argv[1][i] - 'a' + 13) % 26;
				write(1, &alpha[result], 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				result = (argv[1][i] - 'A' + 13) % 26;
				write(1, &ALPHA[result], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
