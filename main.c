/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkootstr <mkootstr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/23 16:50:06 by mkootstr      #+#    #+#                 */
/*   Updated: 2024/02/23 17:19:56 by mkootstr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"
#include <errno.h>

void    fatal(char *msg)
{
    ft_putstr_fd(msg, 2);
    exit(1);
}

void *ft_malloc(size_t size)
{
    void *ptr;

    ptr = malloc(size);
    if (!ptr)
        fatal("Error: malloc failed\n");
    return (ptr);
}

t_input *parse(char *file)
{
    int fd;
    t_input *input;

    fd = open(file, O_RDONLY);
    if (fd < 0)
        perror("Error: ");
    input = ft_malloc(sizeof(t_input));

}

int main(int argc, char **argv)
{
    t_input *input;

    if (argc != 2)
        fatal("Error: invalid number of arguments\n");
    else
        input = parse(argv[1]);
    if (input)
        render(input);
    else
        fatal("Error: invalid input\n");
    return (0);
}