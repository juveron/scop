/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_length_sq.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:42:57 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:05:36 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	vec2i_length_sq(t_vec2i vec1)
{
	return (vec1.x * vec1.x + vec1.y * vec1.y);
}

float	vec2f_length_sq(t_vec2f vec1)
{
	return (vec1.x * vec1.x + vec1.y * vec1.y);
}

float	vec2d_length_sq(t_vec2d vec1)
{
	return (vec1.x * vec1.x + vec1.y * vec1.y);
}

float	vec2ui_length_sq(t_vec2ui vec1)
{
	return (vec1.x * vec1.x + vec1.y * vec1.y);
}
