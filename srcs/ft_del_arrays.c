/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_arrays.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrancoi <afrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 20:18:45 by afrancoi          #+#    #+#             */
/*   Updated: 2019/06/24 20:20:29 by afrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_del_arrays(char **tab)
{
	int i;

	i = -1;
	if (!*tab)
		return ;
	while (tab[++i])
		ft_strdel(&tab[i]);
	free(tab);
	tab = NULL;
}
