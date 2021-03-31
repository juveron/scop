/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim_right.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:03:11 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:28:59 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

void	ft_strctrim_right(char **a_str, char const c)
{
	int		i;

	if (!a_str || !(*a_str))
		return ;
	i = ft_strlen(*a_str) - 1;
	while ((*a_str)[i] == c)
	{
		(*a_str)[i] = '\0';
		--i;
	}
}
