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

# include <GLFW/glfw3.h>
# include "/usr/local/Cellar/glfw/3.3.3/include/GLFW/glfw3.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

# include "../libft/hdrs/libft.h"

# define WINDOW_WIDTH 1600
# define WINDOW_HEIGHT 1200

typedef enum        s_error
{
    ALLOC_FAILED,
    NB_ARGUMENT,
    WRONG_USAGE,
    WRONG_FILE,
    PARSING,
}                   t_error;

typedef struct      s_env
{
    GLFWwindow* window;
    char* filename;
    t_error error;
    t_vec3f     vertex;
    int   fd;

}                   t_env;

void    init_env();
//int		ft_parsing(t_env *e);

#endif