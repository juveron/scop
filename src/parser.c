#include "../includes/scop.h"


int		ft_parsing(t_env *e)
{
    int i;
    char *tab;
    char **ptr;

    i = 0;
    e->fd = open(e->filename, O_RDONLY);
    while (get_next_line(e->fd, &tab) == 1)
    {
        if (tab[0] == 'v')
        {
            ptr = ft_strsplit(tab, ' ');
            e->vertexCordo[i] = vec3f(ft_atof(ptr[1]), ft_atof(ptr[2], ft_atof(ptr[3])));
            ft_putnbr(vertexCordo[i]);
            ft_freetab((void***)&ptr);
            i++;
        }
        else
        {
            close(e->fd);
            ft_putstr_fd("Error : parsing failded\n", 2);
            return (0);
        }
        free(tab);
    }
    close(e->fd);
    return (1);
}
