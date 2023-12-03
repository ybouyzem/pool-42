/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 22:59:02 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/10/05 19:30:04 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		while (str[i] && check_sep(str[i], charset))
		{
			i++;
		}
		if (str[i] != '\0')
		{
			nbr++;
		}
		while (str[i] && !check_sep(str[i], charset))
		{
			i++;
		}
	}
	return (nbr);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && (!check_sep(str[i], charset)))
		i++;
	return (i);
}

char	*ft_strdup(char *str, char *charset)
{
	int		i;
	int		lw;
	char	*word;

	i = 0;
	lw = ft_wordlen(str, charset);
	word = (char *)malloc(lw + 2);
	while (i < lw)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		index;
	int		str_nbr;

	str_nbr = count_strings(str, charset);
	index = 0;
	result = (char **)malloc(sizeof(char *) * (str_nbr + 1));
	while (*str)
	{
		while (*str && check_sep(*str, charset))
		{
			str++;
		}
		if (*str != '\0')
		{
			result[index] = ft_strdup(str, charset);
			index++;
		}
		while (*str && !check_sep(*str, charset))
		{
			str++;
		}
	}
	result[index] = 0;
	return (result);
}
