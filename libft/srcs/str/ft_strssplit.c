/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strssplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:07:11 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:30:30 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "internal/libft_str_internal.h"

static bool		is_in_char_set(char c, char *char_set)
{
	size_t	i;

	i = 0;
	while (char_set[i])
	{
		if (c == char_set[i])
			return (true);
		i++;
	}
	return (false);
}

static size_t	count_word(const char *s, char *char_set)
{
	size_t	i;
	size_t	nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (is_in_char_set(s[i], char_set))
			i++;
		else
		{
			nb++;
			while (s[i] && !is_in_char_set(s[i], char_set))
				i++;
		}
	}
	return (nb);
}

static size_t	count_char(const char *s, char *char_set)
{
	size_t	i;

	i = 0;
	while (s[i] && !is_in_char_set(s[i], char_set))
		i++;
	return (i);
}

static int		split(char *s, char *char_set, char **tab, size_t size_tab)
{
	size_t	size;
	size_t	j;

	j = 0;
	while (*s)
	{
		if (is_in_char_set(*s, char_set))
			s++;
		else
		{
			size = count_char(s, char_set);
			if ((tab[j] = ft_strsub(s, 0, size)) == NULL)
				return (free_error(&tab, size_tab));
			s += size;
			j++;
		}
	}
	return (1);
}

char			**ft_strssplit(const char *s, char *char_set)
{
	char	**tab;
	size_t	size_tab;

	if (s == NULL)
		return (NULL);
	size_tab = count_word(s, char_set);
	if (!(tab = (char **)ft_memalloc(sizeof(char *) * (size_tab + 1))))
		return (NULL);
	if (!split((char *)s, char_set, tab, size_tab))
		return (NULL);
	return (tab);
}
