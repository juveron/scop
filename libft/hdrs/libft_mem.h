/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mem.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:20:43 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 12:41:20 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEM_H
# define LIBFT_MEM_H

# include "libft.h"

void	ft_bzero(void *s, size_t n);
void	ft_freetab(void ***tab);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_memdel(void **ap);
void	*ft_memfill(void *s, void *elem, size_t number_of_elem,
	size_t sizeof_elem);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memrealloc(void *ptr, size_t old_size, size_t new_size);
void	*ft_memset(void *s, int c, size_t n);
void	ft_memswap(void *a, void *b, size_t n);

#endif
