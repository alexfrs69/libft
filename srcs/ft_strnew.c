/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrancoi <afrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:34:56 by afrancoi          #+#    #+#             */
/*   Updated: 2018/11/13 19:44:28 by afrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (!(str = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_memset(str, '\0', size + 1);
	return (str);
}
