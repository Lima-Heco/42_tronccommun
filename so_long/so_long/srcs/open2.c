/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:07:36 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/04 15:21:57 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_sorties(t_mapassets *maps, char **map)
{
	int	x;
	int	y;

	y = 1;
	while (maps->map[y] != NULL)
	{
		x = 0;
		while (maps->map[y][x] != '\0')
		{
			ft_counte(maps, map, y, x);
			x++;
		}
		y++;
	}
}

void	ft_mur(t_mapassets *maps, char **map)
{
	int	x;
	int	y;

	y = 0;
	while (map[y] != NULL)
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			ft_putx(maps, map, y, x);
			x++;
		}
		y++;
	}
}

void	ft_collectibles(t_mapassets *maps, char **map)
{
	int	x;
	int	y;

	y = 0;
	while (maps->map[y] != NULL)
	{
		x = 0;
		while (maps->map[y][x] != '\0')
		{
			ft_countc(maps, map, y, x);
			x++;
		}
		y++;
	}
}

void	finds_pl(t_mapassets *maps, char **map)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (map[y] != NULL)
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			if (map[y][x] == 'P')
			{
				maps->y_p = y;
				maps->x_p = x;
			}
			x++;
		}
		y++;
	}
}
