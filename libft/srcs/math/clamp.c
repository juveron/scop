/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clamp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:37:14 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:27:11 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

long	clampl(long a, long min, long max)
{
	return (minl(maxl(a, min), max));
}

int		clampi(int a, int min, int max)
{
	return (mini(maxi(a, min), max));
}

float	clampf(float a, float min, float max)
{
	return (minf(maxf(a, min), max));
}
