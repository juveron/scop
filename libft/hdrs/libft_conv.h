/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_conv.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:20:01 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 12:36:34 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CONV_H
# define LIBFT_CONV_H

# include "libft.h"

typedef struct	s_atof
{
	bool	sign;
	bool	exp_sign;
	double	fraction;
	double	flt_exp;
	double	mul;
	char	*p;
	char	c;
	int		exp;
	int		frac_exp;
	int		mantissa_size;
	int		decimal_point;
	char	*p_exp;
	int		frac1;
	int		frac2;
}				t_atof;

long			ft_atol(const char *str);
float			ft_atof(const char *str);
int				ft_atoi(const char *nptr);
t_u32			ft_atoi_hex(char *str);
char			*ft_itoa(int n);
char			*ft_lftoa(double lf);
char			*ft_uitoa_base(t_u64 n, const char *base);

#endif
