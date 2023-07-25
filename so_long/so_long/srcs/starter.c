/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   starter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:16:50 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/04 16:16:32 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	ft_map_name_verif(char *fd)
{
	if (ft_strnstr(fd, ".ber", ft_strlen(fd)) == NULL)
		return (0);
	return (1);
}

void	ft_free(t_mapassets *map, t_mlassets *supmlx)
{
	int	i;

	i = 0;
	while (map->map[i] != NULL)
	{
		free(map->map[i]);
		i++;
	}
	free(map->map);
	mlx_destroy_image(supmlx->mlx, supmlx->img_herbes_ptr);
	mlx_destroy_image(supmlx->mlx, supmlx->img_mur_ptr);
	mlx_destroy_image(supmlx->mlx, supmlx->img_mur_top_ptr);
	mlx_destroy_image(supmlx->mlx, supmlx->img_gros_champi_stand1_ptr);
	mlx_destroy_image(supmlx->mlx, supmlx->img_gros_champi_stand2_ptr);
	mlx_destroy_image(supmlx->mlx, supmlx->img_gros_champi_stand3_ptr);
	mlx_destroy_image(supmlx->mlx, supmlx->img_gros_champi_stand4_ptr);
	mlx_destroy_image(supmlx->mlx, supmlx->img_petit_champi_ptr);
	mlx_destroy_image(supmlx->mlx, supmlx->img_buisson_ptr);
	mlx_destroy_display(supmlx->mlx);
	free(supmlx->mlx);
	exit(0);
}

void	ft_free2(t_mapassets *map)
{
	int	i;

	i = 0;
	while (map->map[i] != NULL)
	{
		free(map->map[i]);
		i++;
	}
	free(map->map);
	exit(0);
}

int	starter(char *fd)
{
	t_mapassets	maps;
	t_mlassets	supmlx;

	maps.map_name = fd;
	maps.cv = 0;
	maps.ev = 0;
	if (ft_map_name_verif(fd) == 0 || ft_open(fd, &maps) == 0)
		return (0);
	if (map_starter(maps) == 0)
	{
		ft_free2(&maps);
		return (0);
	}
	supmlx.c = maps.c;
	supmlx.c_added = 0;
	supmlx.pas = 0;
	supmlx.maps = &maps;
	ft_mlx(&maps, &supmlx);
	return (1);
}
