/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:19:15 by juveron           #+#    #+#             */
/*   Updated: 2021/04/05 13:19:16 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/scop.h"

t_matrix		*get_matrix(void)
{
	t_env	*env;

	if (!(env = get_env_struct(NULL)))
		return (NULL);
	return (env->matrix);
}

t_env			*get_env_struct(t_env *env)
{
	static t_env	*save = NULL;

	if (env != NULL)
		save = env;
	return (save);
}
