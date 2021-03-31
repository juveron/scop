/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_length.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:43:04 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:25:16 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"
#include <math.h>

float	vec2i_length(t_vec2i vec1)
{
	return (sqrtf(vec1.x * vec1.x + vec1.y * vec1.y));
}

float	vec2f_length(t_vec2f vec1)
{
	return (sqrtf(vec1.x * vec1.x + vec1.y * vec1.y));
}

float	vec2d_length(t_vec2d vec1)
{
	return (sqrt(vec1.x * vec1.x + vec1.y * vec1.y));
}

float	vec2ui_length(t_vec2ui vec1)
{
	return (sqrtf(vec1.x * vec1.x + vec1.y * vec1.y));
}
