/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:39:02 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 12:48:06 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

t_vec2f	vec2f_from_angle(float angle)
{
	t_vec2f	vec;

	vec.x = cosf(angle);
	vec.y = sinf(angle);
	return (vec);
}
