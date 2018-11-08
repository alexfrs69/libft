/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrancoi <afrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:13:42 by afrancoi          #+#    #+#             */
/*   Updated: 2018/11/08 12:51:30 by afrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Includes */

# include <unistd.h>
# include <string.h>

/* Prototype */

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);

size_t	ft_strlen(char const *str);

void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *str, int fd);

void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);

void	ft_putnbr(int nb);
void	ft_putnbr_fd(int nb, int fd);

#endif
