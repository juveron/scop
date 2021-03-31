/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:08:25 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:31:04 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vector.h"
#include "libft_mem.h"

bool		vector_resize(t_vector *da, size_t capacity)
{
	void	*items;

	if (capacity < da->capacity)
	{
		if (!(items = (void *)malloc(capacity * da->sizeof_elem)))
			return (false);
		ft_memcpy(items, da->items, capacity * da->sizeof_elem);
		free(da->items);
	}
	else
		items = ft_memrealloc(da->items, da->sizeof_elem * da->capacity,
			da->sizeof_elem * capacity);
	if (!items)
		return (false);
	da->items = items;
	da->capacity = capacity;
	return (true);
}

bool		vector_push(t_vector *da, void *item)
{
	if (da->capacity == da->total)
		if (!vector_resize(da, da->capacity * 2))
			return (false);
	ft_memcpy(da->items + da->sizeof_elem * da->total++, item,
				da->sizeof_elem);
	return (true);
}

void		*vector_get(t_vector *da, size_t index)
{
	if (index < da->total)
		return (da->items + index * da->sizeof_elem);
	return (NULL);
}

bool		vector_delete(t_vector *da, size_t index)
{
	if (index >= da->total)
		return (true);
	ft_memmove(da->items + index * da->sizeof_elem, da->items + (index + 1)
		* da->sizeof_elem, (da->total - 1 - index) * da->sizeof_elem);
	if (da->total - 1 > 0 && da->total - 1 == da->capacity / 4)
	{
		if (!vector_resize(da, da->capacity / 2))
			return (false);
	}
	--da->total;
	return (true);
}
