/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrancoi <afrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:13:42 by afrancoi          #+#    #+#             */
/*   Updated: 2018/11/09 19:27:58 by afrancoi         ###   ########.fr       */
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

size_t	ft_strlen(const char *str);
int		ft_strcmp(char const *s1, const char *s2);

void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *str, int fd);

void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);

void	ft_putnbr(int nb);
void	ft_putnbr_fd(int nb, int fd);

int		ft_tolower(int c);
int		ft_toupper(int c);

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);

void	*ft_memset(void *b, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	bzero(void *s, size_t n);

#endif
