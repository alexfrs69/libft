/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strirchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrancoi <afrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:07:35 by afrancoi          #+#    #+#             */
/*   Updated: 2019/10/10 21:09:52 by afrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strirchr(const char *s, int c)
{
	char	*str;
	char	tofind;
	int		find;
	int		i;

	i = 0;
	find = -1;
	str = (char *)s;
	tofind = (char)c;
	while (*str)
	{
		if (*str == tofind)
			find = i;
		i++;
		str++;
	}
	return (find);
}
