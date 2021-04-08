/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:19:04 by juveron           #+#    #+#             */
/*   Updated: 2021/04/08 11:13:18 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/scop.h"

 static void	parse_data(FILE *fs, t_model *model)
 {
 	char	**split;
 	char	*buf;
 	size_t	buf_cap;
 	ssize_t	buf_len;

 	buf = NULL;
 	buf_cap = 0;
 	while ((buf_len = getline(&buf, &buf_cap, fs)) > 0)
 	{
 		if (buf_len > 1 && buf[0] == 'v' && buf[1] == ' ')
 		{
 			split = ft_strsplit(buf, ' ');
 			store_vertex(split, model->vertex_vector, &(model->number_vtx));
			ft_freetab((void***)&split);
 		}
 		else if (buf_len > 1 && buf[0] == 'f' && buf[1] == ' ')
 		{
 			split = ft_strsplit(buf, ' ');
 			store_face(split, model->face_vector, &(model->number_face));
			ft_freetab((void***)&split);
 		}
 	}
 	free(buf);
 }

 static int	parse_file_line(char *line)
 {
 	int		i;
 	char	**split;

 	i = 0;
 	split = NULL;
 	if (!(split = ft_strsplit(line, ' ')))
 		exit_error(ALLOC, NULL);
 	while (split[i])
 		i++;
	 ft_freetab((void***)&split);
 	if (i == 4)
 		return (1);
 	if (i == 5)
 		return (2);
 	return (0);
 }

 static void	parse_file(FILE *fs, unsigned int *nb_vtx, unsigned int *nb_face)
 {
 	char	*buf;
 	size_t	buf_cap;
 	ssize_t	buf_len;

 	buf = NULL;
 	buf_cap = 0;
 	while ((buf_len = getline(&buf, &buf_cap, fs)) > 0)
 	{
 		if (buf_len > 1 && buf[0] == 'v' && buf[1] == ' ')
 			(*nb_vtx)++;
 		else if (buf_len > 1 && buf[0] == 'f' && buf[1] == ' ')
 			(*nb_face) += parse_file_line(buf);
 	}
 	free(buf);
 	if (*nb_vtx < 3 || *nb_face == 0)
 		exit_error(MODEL_DATA, NULL);
 }

 void		handle_file(char *path, t_model *model)
 {
 	FILE	*fs;

 	if (!(fs = fopen(path, "r")))
 		exit_error(OPEN, path);
 	parse_file(fs, &(model->number_vtx), &(model->number_face));
 	model->name = ft_strrchr(path, '/') + 1;
 	if (!(model->vertex_vector = (t_vec3**)malloc(sizeof(t_vec3*) * model->number_vtx)))
 		exit_error(ALLOC, NULL);
 	if (!(model->face_vector =
 	(unsigned int**)malloc(sizeof(unsigned int*) * model->number_face)))
 		exit_error(ALLOC, NULL);
 	if (!model->vertex_vector || !model->face_vector)
 	{
 		fclose(fs);
 		exit_error(ALLOC, NULL);
 	}
 	rewind(fs);
 	parse_data(fs, model);
 	fclose(fs);
 }
