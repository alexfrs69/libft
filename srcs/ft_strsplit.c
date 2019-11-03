/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrancoi <afrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 22:14:21 by afrancoi          #+#    #+#             */
/*   Updated: 2019/11/03 01:24:30 by afrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int		ft_check(char c, char *charset)
{
	int i;

	i = -1;
	while (charset[++i])
	{
		if (charset[i] == c)
			return (1);
	}
	return (0);
}

static int		ft_countwords(char const *str, char *charset)
{
	int count;

	count = 0;
	while (*str)
	{
		while (ft_check(*str, charset) && *str)
			str++;
		if (!ft_check(*str, charset) && *str)
		{
			count++;
			while (!ft_check(*str, charset) && *str)
				str++;
		}
	}
	return (count);
}

static size_t	ft_wordlen(char const *str, char *charset)
{
	size_t len;

	len = 0;
	while (ft_check(*str, charset) && *str)
		str++;
	while (!ft_check(*str, charset) && *str++)
		len++;
	return (len);
}

char			**ft_strsplit(char const *str, char *charset)
{
	int		words;
	int		wordscount;
	int		i;
	char	**ret;

	if (!str)
		return (NULL);
	wordscount = ft_countwords(str, charset);
	if (!(ret = (char**)ft_memalloc(sizeof(char*) * (wordscount + 1))))
		return (NULL);
	words = -1;
	while (++words < wordscount)
	{
		while (ft_check(*str, charset) && *str)
			str++;
		if (!(ret[words] = ft_strnew(ft_wordlen(str, charset))))
		{
			ft_del_arrays(ret);
			return (NULL);
		}
		i = 0;
		while (!ft_check(*str, charset) && *str)
			ret[words][i++] = *str++;
	}
	return (ret);
}
