/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_io.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:20:13 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 12:41:38 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_IO_H
# define LIBFT_IO_H

# include "libft.h"

void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putendl(const char *s);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n);
size_t	ft_putnwstr_fd(wchar_t *str, size_t n, int fd);
size_t	ft_putnwstr(wchar_t *str, size_t n);
void	ft_putnstr_fd(char *s, size_t n, int fd);
void	ft_putnstr(char *s, size_t n);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putstr(const char *s);
size_t	ft_putwchar_fd(wchar_t c, int fd);
size_t	ft_putwchar(wchar_t c);
size_t	ft_putwstr_fd(wchar_t *str, int fd);
size_t	ft_putwstr(wchar_t *str);

#endif
