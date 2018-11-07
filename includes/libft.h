/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrancoi <afrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:13:42 by afrancoi          #+#    #+#             */
/*   Updated: 2018/11/07 18:38:07 by afrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Includes */

# include <unistd.h>

/* Prototype */

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
int		ft_strlen(char *str);
void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *str, int fd);
void	ft_putendl(char const *s);

#endif
