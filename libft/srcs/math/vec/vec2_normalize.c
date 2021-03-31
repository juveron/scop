/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_normalize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:43:29 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:25:25 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec2f	vec2i_normalize(t_vec2i vec1)
{
	float	len;

	len = vec2i_length(vec1);
	return ((t_vec2f){vec1.x / len, vec1.y / len});
}

t_vec2f	vec2f_normalize(t_vec2f vec1)
{
	float	len;

	len = vec2f_length(vec1);
	return ((t_vec2f){vec1.x / len, vec1.y / len});
}

t_vec2d	vec2d_normalize(t_vec2d vec1)
{
	float	len;

	len = vec2d_length(vec1);
	return ((t_vec2d){vec1.x / len, vec1.y / len});
}

t_vec2f	vec2ui_normalize(t_vec2ui vec1)
{
	float	len;

	len = vec2ui_length(vec1);
	return ((t_vec2f){vec1.x / len, vec1.y / len});
}
