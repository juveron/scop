/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log10.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:37:49 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 12:47:27 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_log10(long n)
{
	int	ret;

	ret = 0;
	while (n > 9)
	{
		ret += 1;
		n /= 10;
	}
	return (ret);
}
