/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim_left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:03:05 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:28:48 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

void	ft_strctrim_left(char **a_str, char const c)
{
	int		i;

	if (!a_str || !(*a_str))
		return ;
	i = 0;
	while ((*a_str)[i] == c)
	{
		(*a_str)[i] = '\0';
		i++;
	}
}
