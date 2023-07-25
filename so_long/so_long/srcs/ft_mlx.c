/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:21:33 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/04 16:16:33 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	end(t_mlassets *param)
{
	mlx_clear_window(param->mlx, param->window);
	mlx_loop_end(param->mlx);
	mlx_destroy_window(param->mlx, param->window);
	ft_free(param->maps, param);
	return (0);
}

int	my_key_funct(int keycode, t_mlassets *param)
{
	if (keycode == 65307)
		end(param);
	if (keycode == 119)
		go_top(param);
	if (keycode == 115)
		go_bot(param);
	if (keycode == 100)
		go_right(param);
	if (keycode == 97)
		go_left(param);
	return (0);
}

int	ft_mlx(t_mapassets *maps, t_mlassets *supmlx)
{
	supmlx->map = maps->map;
	supmlx->mlx = mlx_init();
	supmlx->window = mlx_new_window(supmlx->mlx,
			maps->x * 32, maps->y * 32, "so_long");
	img_init(supmlx);
	supmlx->frame = 0;
	mlx_loop_hook(supmlx->mlx, sprites, supmlx);
	mlx_hook(supmlx->window, 17, 0, end, supmlx);
	mlx_key_hook(supmlx->window, my_key_funct, supmlx);
	put_img(supmlx);
	mlx_loop(supmlx->mlx);
	return (0);
}
