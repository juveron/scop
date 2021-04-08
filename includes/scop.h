/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:00:52 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 10:01:51 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCOP_H
# define SCOP_H

# define GL_SILENCE_DEPRECATION
# define GLFW_INCLUDE_GLCOREARB

# include "../libft/hdrs/libft.h"
# include <stdio.h>
# include <GLFW/glfw3.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define WINDOW_WIDTH 1600
# define WINDOW_HEIGHT 1000
# define BMP_HEADER_SIZE 54
# define FRAG_SHADER "simple.frag"
# define VTX_SHADER "basic.vert"

typedef enum		e_error
{
	ARGUMENT,
	OPEN,
	READ,
	CLOSE,
	ALLOC,
	MODEL_DATA,
	UNSUPPORTED,
	GLFW_INIT,
	WINDOW,
	SHADER,
	UNIFORM_VAR,
	TEXTURE_LOAD
}					t_error;

typedef struct		s_texture
{
	int				width;
	int				height;
	unsigned int	img_size;
	unsigned short	bpp;
	unsigned char	*buff_data;
	unsigned char	*img_data;
	unsigned int	data_offset;
}					t_texture;

typedef struct		s_model
{
	unsigned int	number_vtx;
	unsigned int	number_face;
	t_vec3			**vertex_vector;
	unsigned int	**face_vector;
	float			center_points[3];
	float			max_coord_interval;
	char			*name;
}					t_model;

typedef struct		s_gl_objs
{
	unsigned int	vao;
	unsigned int	vbo;
	unsigned int	ebo;
	unsigned int	vtx_shader;
	unsigned int	frag_shader;
	unsigned int	shader_prog;
	unsigned int	nb_elems;
	GLuint			tex_id[2];
	GLint			mvp;
	GLint			interpolate;
	GLint			color;
	GLint			gradient;
	GLint			tex_loc;
	GLint			light_loc;
}					t_gl_objs;

typedef struct		s_render_opts
{
	int				demo;
	int				interpolate;
	int				wireframe;
	int				color;
	int				gradient;
	int				texture;
	float			ambient_light;
}					t_render_opts;

typedef struct		s_matrix
{
	t_mat4			translate;
	t_mat4			rotate;
	t_mat4			scale;
	t_mat4			model;
	t_mat4			view;
	t_mat4			proj;
	t_mat4			mvp;
	float			fov;
}					t_matrix;

typedef struct		s_env
{
	t_model			*model;
	t_gl_objs		*gl_objs;
	t_matrix		*matrix;
	GLFWwindow		*window;
	char			*filename;
	int				fd;
	t_render_opts	*render_opts;

}					t_env;

t_env				*init_env(void);
t_matrix			*init_matrix(float coord_interval);
void				init_window(GLFWwindow **win, char *model_name);

void				handle_file(char *path, t_model *model);
void				store_vertex(char **data, t_vec3 **array,
	unsigned int *nb_vtx);
void				store_face(char **data, unsigned int **array,
	unsigned int *nb_face);

t_gl_objs			*generate_gl_objs(t_model *model);
unsigned int		generate_shader_program(unsigned int vertex_shader,
											unsigned int fragment_shader);
unsigned int		generate_shader(char *shader_file, int shader_type);
GLuint				load_texture(const char *filename);

void				set_model_pos_infos(t_model *model);
void				mvp_update(t_matrix *matrices);
void				gl_objs_update(t_gl_objs *gl_objs,
	t_render_opts *render_opts, GLfloat *mvp_address);

void				key_callback(GLFWwindow *win, int key, int scanc,
	int action, int mods);

void				rotate(t_matrix *matrices, int key);
void				translate(t_matrix *mat, int key);

t_matrix			*get_matrix(void);
t_env				*get_env_struct(t_env *env);

void				put_error(t_error err, const char *str);
void				exit_error(t_error err, const char *str);

#endif
