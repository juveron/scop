/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clock_p2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:07:21 by killian           #+#    #+#             */
/*   Updated: 2021/03/29 10:26:50 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/time.h>
#include "clock.h"

void	clock_unpause(t_clock *clock)
{
	if (clock->paused)
	{
		clock->ref_time = get_elapsed_microseconds();
		clock->paused = false;
	}
}

bool	clock_is_pause(t_clock *clock)
{
	return (clock->paused);
}

t_u64	clock_restart(t_clock *clock)
{
	t_u64	now;
	t_u64	elapsed_time;

	now = get_elapsed_microseconds();
	elapsed_time = clock->elapsed_time;
	if (!clock->paused)
		elapsed_time += now - clock->ref_time;
	clock->elapsed_time = 0;
	clock->ref_time = now;
	clock->paused = false;
	return (elapsed_time);
}

void	clock_set_milliseconds(t_clock *clock, t_u64 time)
{
	clock->elapsed_time = time * 1000;
	if (!clock->paused)
		clock->ref_time = get_elapsed_microseconds();
}
