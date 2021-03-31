#include "../includes/scop.h"
//
//static void	rendering_loop(t_env *env)
//{
//    while (!glfwWindowShouldClose(env->window))
//    {
//    }
//}
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void        putError(t_error error)
{
    ft_putstr_fd("scop: ", 2);
    if (error == ALLOC_FAILED)
        ft_putendl_fd("Alloc failed", 2);
    else if (error == NB_ARGUMENT)
        ft_putendl_fd("not enough or much arguments ", 2);
    else if (error == PARSING)
        ft_putendl_fd("parsing failed", 2);
}

void        formError(t_error error)
{
    putError(error);
}

t_env		*init_e()
{
    t_env *e;

    e = ft_memalloc(sizeof(t_env));
    return (e);
}

int		ft_parsing(t_env *e)
{
    int i;
    char *line;
    char **ptr;

    i = 0;
    e->fd = open(e->filename, O_RDONLY);
    while (get_next_line(e->fd, &line) > 0)
    {
        if (line[0] == 'v')
        {
            ptr = ft_strsplit(line, ' ');
            e->vertex = vec3f(ft_atof(ptr[1]), ft_atof(ptr[2]), ft_atof(ptr[3]));
            printf("%f", e->vertex.x);
            ft_freetab((void***)&ptr);
            i++;
        }
        else
        {
            close(e->fd);
            formError(PARSING);
            return (0);
        }
        free(line);
    }
    close(e->fd);
    return (1);
}

int main(int ac, char** av)
{
    t_env *e;

    e = init_e();
    if (ac == 2)
    {
    e->filename = av[1];
    ft_parsing(e);
    }
    else return (1);
//    GLWwindow* window;
//
//    /* Initialize the library */
//    if (!glfwInit())
//        return -1;
//
//    /* Create a windowed mode window and its OpenGL context */
//    window = glfwCreateWindow(1000, 1000, "scop", NULL, NULL);
//    if (!window)
//    {
//        glfwTerminate();
//        return -1;
//    }
//
//    /* Make the window's context current */
//    glfwMakeContextCurrent(window);
//
//    /* Loop until the user closes the window */
//    while (!glfwWindowShouldClose(window))
//    {
//        /* Render here */
//        glClear(GL_COLOR_BUFFER_BIT);
//
//        /* Swap front and back buffers */
//        glfwSwapBuffers(window);
//
//        /* Poll for and process events */
//        glfwPollEvents();
//    }
//
//    glfwTerminate();
    return 0;
}
