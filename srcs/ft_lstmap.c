/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrancoi <afrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 05:36:42 by afrancoi          #+#    #+#             */
/*   Updated: 2018/11/14 05:51:24 by afrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	void	ft_del(void *content, size_t content_size)
{

}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ret;
	t_list *tmp;

	if (!lst)
		return (NULL);
	while (lst)
	{
		tmp = ft_lstnew(lst->content, lst->content_size);
		ret = ft_lstadd(&ret, tmp);
		ft_lstdelone(&tmp,)
		lst = lst->next;
	}
}
