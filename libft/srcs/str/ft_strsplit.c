/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:06:56 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:30:24 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(const char *s, char c)
{
	size_t	i;
	size_t	nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			nb++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (nb);
}

static size_t	count_char(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char		**free_error(char ***tab, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		ft_strdel(&(*tab)[i++]);
	ft_strdel((*tab));
	return (NULL);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**tab;
	size_t	j;
	size_t	size_tab;
	size_t	size;

	j = 0;
	if (s == NULL)
		return (NULL);
	size_tab = count_word(s, c);
	if (!(tab = (char **)ft_memalloc(sizeof(char *) * (size_tab + 1))))
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			size = count_char(s, c);
			if ((tab[j] = ft_strsub(s, 0, size)) == NULL)
				return (free_error(&tab, size_tab));
			s += size;
			j++;
		}
	}
	return (tab);
}
