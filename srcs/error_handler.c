/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:18:04 by juveron           #+#    #+#             */
/*   Updated: 2021/04/05 13:18:13 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/scop.h"

static void	put_error2(t_error err, const char *str)
{
	if (err == TEXTURE_LOAD)
	{
		ft_putstr_fd("Texture loading error: ", 2);
		ft_putendl_fd("source is a not a well formated .bmp file", 2);
	}
	else if (err == UNSUPPORTED)
	{
		ft_putstr_fd(str, 2);
		ft_putendl_fd(" has been ignored (format not supported)", 2);
	}
}

void		put_error(t_error err, const char *str)
{
	ft_putstr_fd("scop: ", 2);
	if (err == ARGUMENT)
		ft_putendl_fd("One (and only one) argument is expected", 2);
	else if (err == OPEN || err == READ || err == CLOSE || err == ALLOC)
		perror(str);
	else if (err == MODEL_DATA)
		ft_putendl_fd("Not enough data to build a model", 2);
	else if (err == GLFW_INIT)
		ft_putendl_fd("An error has occured during GLFW initialization", 2);
	else if (err == WINDOW)
		ft_putendl_fd("An error has occured during GLFW Window creation", 2);
	else if (err == SHADER)
	{
		ft_putstr_fd("Shader compilation / linkage error: ", 2);
		ft_putendl_fd(str, 2);
	}
	else if (err == UNIFORM_VAR)
	{
		ft_putstr_fd("An error has occured during ", 2);
		ft_putendl_fd("OpenGL uniform variables binding", 2);
	}
	else
		put_error2(err, str);
}

void		exit_error(t_error err, const char *str)
{
	put_error(err, str);
	exit(EXIT_FAILURE);
}
