/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putimg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 21:46:06 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/04 15:21:59 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	img_init(t_mlassets *img)
{
	int	img_width;
	int	img_height;

	img_width = 32;
	img_height = 32;
	img->img_herbes_ptr = mlx_xpm_file_to_image(img->mlx,
			"./sprites/herbes.xpm", &img_width, &img_height);
	img->img_mur_ptr = mlx_xpm_file_to_image(img->mlx,
			"./sprites/mur2.xpm", &img_width, &img_height);
	img->img_mur_top_ptr = mlx_xpm_file_to_image(img->mlx,
			"./sprites/mur_top3.xpm", &img_width, &img_height);
	img->img_gros_champi_stand1_ptr = mlx_xpm_file_to_image(img->mlx,
			"./sprites/gros_champi_1.xpm", &img_width, &img_height);
	img->img_gros_champi_stand2_ptr = mlx_xpm_file_to_image(img->mlx,
			"./sprites/gros_champi_2.xpm", &img_width, &img_height);
	img->img_gros_champi_stand3_ptr = mlx_xpm_file_to_image(img->mlx,
			"./sprites/gros_champi_3.xpm", &img_width, &img_height);
	img->img_gros_champi_stand4_ptr = mlx_xpm_file_to_image(img->mlx,
			"./sprites/gros_champi_4.xpm", &img_width, &img_height);
	img->img_petit_champi_ptr = mlx_xpm_file_to_image(img->mlx,
			"./sprites/petit_champi_1.xpm", &img_width, &img_height);
	img->img_buisson_ptr = mlx_xpm_file_to_image(img->mlx,
			"./sprites/buisson2.xpm", &img_width, &img_height);
	return (0);
}

int	sprites(t_mlassets *supmlx)
{
	if (supmlx->frame / 1000 == 0)
		mlx_put_image_to_window(supmlx->mlx,
			supmlx->window, supmlx->img_gros_champi_stand1_ptr,
			supmlx->x_p * 32, supmlx->y_p * 32);
	if (supmlx->frame / 800 == 1)
		mlx_put_image_to_window(supmlx->mlx,
			supmlx->window, supmlx->img_gros_champi_stand2_ptr,
			supmlx->x_p * 32, supmlx->y_p * 32);
	if (supmlx->frame / 800 == 2)
		mlx_put_image_to_window(supmlx->mlx,
			supmlx->window, supmlx->img_gros_champi_stand3_ptr,
			supmlx->x_p * 32, supmlx->y_p * 32);
	if (supmlx->frame / 800 == 3)
		mlx_put_image_to_window(supmlx->mlx,
			supmlx->window, supmlx->img_gros_champi_stand4_ptr,
			supmlx->x_p * 32, supmlx->y_p * 32);
	supmlx->frame++;
	if (supmlx->frame / 800 == 4)
		supmlx->frame = 0;
	return (0);
}

void	ft_put(t_mlassets *supmlx, void *test, int x, int y)
{
	mlx_put_image_to_window(supmlx->mlx, supmlx->window, test, x * 32, y * 32);
}

void	ft_putimg(t_mlassets *supmlx, int num, int x, int y)
{
	if (num == 1)
	{
		if (y == 0)
			ft_put(supmlx, supmlx->img_mur_top_ptr, x, y);
		else
			ft_put(supmlx, supmlx->img_mur_ptr, x, y);
	}
	if (num == 2)
	{
		supmlx->x_p = x;
		supmlx->y_p = y;
	}
}

int	put_img(t_mlassets *supmlx)
{
	int	x;
	int	y;

	y = 0;
	supmlx->debug = 0;
	while (supmlx->map[y] != NULL && !supmlx->debug)
	{
		x = 0;
		while (supmlx->map[y][x] != '\0' && !supmlx->debug)
		{
			if (supmlx->map[y][x] == '1')
				ft_putimg(supmlx, 1, x, y);
			else if (supmlx->map[y][x] == '0')
				ft_put(supmlx, supmlx->img_herbes_ptr, x, y);
			else if (supmlx->map[y][x] == 'P')
				ft_putimg(supmlx, 2, x, y);
			else if (supmlx->map[y][x] == 'C')
				ft_put(supmlx, supmlx->img_petit_champi_ptr, x, y);
			else if (supmlx->map[y][x] == 'E')
				ft_put(supmlx, supmlx->img_buisson_ptr, x, y);
			x++;
		}
		y++;
	}
	return (1);
}
