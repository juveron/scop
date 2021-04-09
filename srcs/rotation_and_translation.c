/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:18:25 by juveron           #+#    #+#             */
/*   Updated: 2021/04/05 13:18:42 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/scop.h"

void	mvp_update(t_matrix *matrix)
{
	matrix->model = mat4_mul(matrix->scale,
	mat4_mul(matrix->rotate, matrix->translate));
	matrix->mvp = mat4_mul(matrix->model,
	mat4_mul(matrix->view, matrix->proj));
}

void	rotate(t_matrix *matrix, int key)
{
	if (key == GLFW_KEY_UP)
		matrix->rotate = mat4_rotate(matrix->rotate, 0.025f, X_AXIS);
	if (key == GLFW_KEY_DOWN)
		matrix->rotate = mat4_rotate(matrix->rotate, -0.025f, X_AXIS);
	if (key == GLFW_KEY_LEFT)
		matrix->rotate = mat4_rotate(matrix->rotate, 0.025f, Y_AXIS);
	if (key == GLFW_KEY_RIGHT)
		matrix->rotate = mat4_rotate(matrix->rotate, -0.025f, Y_AXIS);
	if (key == GLFW_KEY_PAGE_UP)
		matrix->rotate = mat4_rotate(matrix->rotate, 0.025f, Z_AXIS);
	if (key == GLFW_KEY_PAGE_DOWN)
		matrix->rotate = mat4_rotate(matrix->rotate, -0.025f, Z_AXIS);
	mvp_update(matrix);
}

void	translate(t_matrix *matrix, int key)
{
	if (key == GLFW_KEY_A)
		matrix->translate = mat4_translate(matrix->translate,
		new_vec3(-0.07f, 0, 0));
	if (key == GLFW_KEY_D)
		matrix->translate = mat4_translate(matrix->translate,
		new_vec3(0.07f, 0, 0));
	if (key == GLFW_KEY_W)
		matrix->translate = mat4_translate(matrix->translate,
		new_vec3(0, 0.07f, 0));
	if (key == GLFW_KEY_S)
		matrix->translate = mat4_translate(matrix->translate,
		new_vec3(0, -0.07f, 0));
	if (key == GLFW_KEY_Q)
		matrix->translate = mat4_translate(matrix->translate,
		new_vec3(0, 0, 0.07f));
	if (key == GLFW_KEY_E)
		matrix->translate = mat4_translate(matrix->translate,
		new_vec3(0, 0, -0.07f));
	mvp_update(matrix);
}
