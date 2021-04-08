/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gl_objs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:18:07 by juveron           #+#    #+#             */
/*   Updated: 2021/04/05 13:18:14 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/scop.h"

void				gl_objs_update(t_gl_objs *gl_objs,
t_render_opts *render_opts, GLfloat *mvp_address)
{
	glUniformMatrix4fv(gl_objs->mvp, 1, GL_FALSE, mvp_address);
	glUniform1i(gl_objs->interpolate, render_opts->interpolate);
	glUniform1i(gl_objs->color, render_opts->color);
	glUniform1i(gl_objs->gradient, render_opts->gradient);
	glUniform1i(gl_objs->tex_loc, render_opts->texture);
	glUniform1f(gl_objs->light_loc, render_opts->ambient_light);
}

static void			bind_uniform_locations(t_gl_objs *gl_objs)
{
	if ((gl_objs->mvp =
	glGetUniformLocation(gl_objs->shader_prog, "mvp")) == -1)
		exit_error(UNIFORM_VAR, NULL);
	if ((gl_objs->interpolate =
	glGetUniformLocation(gl_objs->shader_prog, "interpolate")) == -1)
		exit_error(UNIFORM_VAR, NULL);
	if ((gl_objs->color =
	glGetUniformLocation(gl_objs->shader_prog, "color")) == -1)
		exit_error(UNIFORM_VAR, NULL);
	if ((gl_objs->gradient =
	glGetUniformLocation(gl_objs->shader_prog, "gradient")) == -1)
		exit_error(UNIFORM_VAR, NULL);
	if ((gl_objs->tex_loc =
	glGetUniformLocation(gl_objs->shader_prog, "texturing")) == -1)
		exit_error(UNIFORM_VAR, NULL);
	if ((gl_objs->light_loc =
	glGetUniformLocation(gl_objs->shader_prog, "ambient_light")) == -1)
		exit_error(UNIFORM_VAR, NULL);
	glUniform1i(glGetUniformLocation(gl_objs->shader_prog,
	"kitten_texture"), 0);
	glUniform1i(glGetUniformLocation(gl_objs->shader_prog,
	"fkoehler_texture"), 1);
}

static unsigned int	generate_ebo(unsigned int **faces, unsigned int nb_faces)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	ebo;
	unsigned int	indices[nb_faces * 3];

	i = 0;
	j = 0;
	while (i < nb_faces)
	{
		k = 0;
		while (k < 3)
		{
			indices[j] = faces[i][k];
			j++;
			k++;
		}
		i++;
	}
	glGenBuffers(1, &ebo);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices,
	GL_DYNAMIC_DRAW);
	return (ebo);
}

static unsigned int	generate_vbo(t_vec3 **vec, unsigned int nb_vtx)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	vbo;
	float			vertices[nb_vtx * 3];

	i = 0;
	j = 0;
	while (i < nb_vtx)
	{
		k = 0;
		while (k < 3)
		{
			vertices[j] = vec[i]->v[k];
			j++;
			k++;
		}
		i++;
	}
	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_DYNAMIC_DRAW);
	return (vbo);
}

t_gl_objs			*generate_gl_objs(t_model *model)
{
	t_gl_objs	*gl_objs;

	if (!(gl_objs = (t_gl_objs *)malloc(sizeof(*gl_objs))))
		exit_error(ALLOC, NULL);
	glGenVertexArrays(1, &(gl_objs->vao));
	glBindVertexArray(gl_objs->vao);
	gl_objs->vbo = generate_vbo(model->vertex_vector, model->number_vtx);
	gl_objs->ebo = generate_ebo(model->face_vector, model->number_face);
	gl_objs->vtx_shader = generate_shader(VTX_SHADER, GL_VERTEX_SHADER);
	gl_objs->frag_shader = generate_shader(FRAG_SHADER, GL_FRAGMENT_SHADER);
	gl_objs->shader_prog = generate_shader_program(gl_objs->vtx_shader,
	gl_objs->frag_shader);
	gl_objs->vtx_shader = 0;
	gl_objs->frag_shader = 0;
	gl_objs->tex_id[0] = load_texture("chaton.bmp");
	gl_objs->tex_id[1] = load_texture("banane.bmp");
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat),
	(GLvoid*)0);
	glEnableVertexAttribArray(0);
	glUseProgram(gl_objs->shader_prog);
	bind_uniform_locations(gl_objs);
	return (gl_objs);
}
