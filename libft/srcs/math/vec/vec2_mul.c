/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_mul.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:43:10 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:25:19 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec2i		vec2i_mul(t_vec2i vec1, int mul)
{
	return ((t_vec2i){vec1.x * mul, vec1.y * mul});
}

t_vec2ui	vec2ui_mul(t_vec2ui vec1, t_u32 mul)
{
	return ((t_vec2ui){vec1.x * mul, vec1.y * mul});
}

t_vec2f		vec2f_mul(t_vec2f vec1, float mul)
{
	return ((t_vec2f){vec1.x * mul, vec1.y * mul});
}

t_vec2d		vec2d_mul(t_vec2d vec1, double mul)
{
	return ((t_vec2d){vec1.x * mul, vec1.y * mul});
}
