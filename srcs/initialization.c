/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:18:10 by juveron           #+#    #+#             */
/*   Updated: 2021/04/05 13:18:16 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/scop.h"

static t_render_opts	*init_render_opts(void)
{
	t_render_opts	*render_opts;

	if (!(render_opts = (t_render_opts*)malloc(sizeof(*render_opts))))
		exit_error(ALLOC, NULL);
	render_opts->demo = 1;
	render_opts->interpolate = 0;
	render_opts->wireframe = 0;
	render_opts->color = 0;
	render_opts->gradient = 1;
	render_opts->texture = 0;
	render_opts->ambient_light = 1.0f;
	return (render_opts);
}

static t_model			*init_model(void)
{
	t_model	*model;

	if (!(model = (t_model*)malloc(sizeof(*model))))
		exit_error(ALLOC, NULL);
	model->number_vtx = 0;
	model->number_face = 0;
	model->vertex_vector = NULL;
	model->face_vector = NULL;
	model->name = NULL;
	model->center_points[0] = 0.0f;
	model->center_points[1] = 0.0f;
	model->center_points[2] = 0.0f;
	model->max_coord_interval = 0.0f;
	return (model);
}

t_env					*init_env(void)
{
	t_env *env;

	env = ft_memalloc(sizeof(t_env));
	get_env_struct(env);
	env->model = init_model();
	env->render_opts = init_render_opts();
	return (env);
}

t_matrix				*init_matrix(float coord_interval)
{
	t_matrix	*matrix;

	if (!(matrix = (t_matrix*)malloc(sizeof(*matrix))))
		exit_error(ALLOC, NULL);
	matrix->fov = 90.0f;
	matrix->translate = mat4_translate(new_mat4(MAT_IDENTITY),
	new_vec3(0, 0, (coord_interval * -0.75f)));
	matrix->rotate = new_mat4(MAT_IDENTITY);
	matrix->scale = new_mat4(MAT_IDENTITY);
	matrix->view = new_mat4(MAT_IDENTITY);
	matrix->proj = new_projection_mat4(matrix->fov,
	(float)WINDOW_WIDTH / (float)WINDOW_HEIGHT, 0.1f, 100.0f);
	mvp_update(matrix);
	return (matrix);
}

void					init_window(GLFWwindow **win, char *model_name)
{
	if (!glfwInit())
		exit_error(GLFW_INIT, NULL);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
	if (!(*win = glfwCreateWindow(WINDOW_WIDTH,
		WINDOW_HEIGHT, model_name, NULL, NULL)))
		exit_error(WINDOW, NULL);
	glfwSetKeyCallback(*win, &key_callback);
	glfwMakeContextCurrent(*win);
	glfwGetFramebufferSize(*win, NULL, NULL);
	glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
	glEnable(GL_TEXTURE_2D);
	glEnable(GL_DEPTH_TEST);
}
