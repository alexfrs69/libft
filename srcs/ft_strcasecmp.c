/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:37:55 by afrancoi          #+#    #+#             */
/*   Updated: 2019/05/30 12:42:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcasecmp(const char *s1, const char *s2)
{
	while (ft_tolower(*s1) == ft_tolower(*s2) && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (ft_tolower(*(const unsigned char*)s1) - ft_tolower(*(const unsigned char*)s2));
}
