/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_p4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:08:17 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:31:01 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "internal/libft_vector_internal.h"

/*
**	Be careful, allocated memory are not fill with zero !
*/

bool	vector_init_n(t_vector *vector, size_t sizeof_elem, size_t numof_elem)
{
	vector->capacity = VECTOR_INIT_CAPACITY;
	while (vector->capacity < numof_elem)
		vector->capacity *= 2;
	vector->total = numof_elem;
	vector->sizeof_elem = sizeof_elem;
	if (!(vector->items = ft_memalloc(sizeof_elem * vector->capacity)))
		return (false);
	return (true);
}
