/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   minirt.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkootstr <mkootstr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/23 16:52:14 by mkootstr      #+#    #+#                 */
/*   Updated: 2024/02/23 17:20:36 by mkootstr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H 
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <fcntl.h>
# include <errno.h>

enum e_shape
{
    SPHERE,
    PLANE,
    CYLINDER
};

typedef struct s_shape
{
    enum e_shape id;
    int co[3];
    int vc[3];
    int diameter;
    int height;
    int rgb[3];
} t_shape;

typedef struct s_light
{
    int co[3];
    int rgb[3];
    int brightness;
} t_light;

typedef struct s_camera
{
    int co[3];
    int vc[3];
    int fov;
} t_camera;

typedef struct s_ambient
{
    int rgb[3];
    int brightness;
} t_ambient;

typedef struct s_input
{
    t_shape *shape;
    t_light *light;
    t_camera *camera;
    t_ambient *ambient;
} t_input;

#endif