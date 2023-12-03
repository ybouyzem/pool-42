/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:55:43 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/10/04 23:30:37 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_is_space(char c)
{
	if (c == 32 || ( c >= 9 && c <= 13))
		return 1;
	return 0;

}

int ft_is_number(char c)
{
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}

int	ft_atoi(const char *str)
{
	int	i;
	int	signe;
	int result;

	signe = 1;
	i = 0;
	while (str[i] && ft_is_space(str[i]))
	{
		i++;
	}
	if (str[i] == '-' && str[i])
	{
		signe *= -1;
		i++;
	}
	else if (str[i] == '+')
	i++;
	while (str[i] && ft_is_number(str[i]))
	{
		result = (result * 10) +(str[i] - '0');
		i++;
	}
	return (result * signe);
}

int main()
{
	int result;
	char str[]="  1234";
	result = ft_atoi(str);
	printf("%d", result);
}
