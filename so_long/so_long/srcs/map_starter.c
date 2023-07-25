/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_starter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:53:49 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/04 15:21:51 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	nombrerequis(t_mapassets *map)
{
	if (map->p < 1 || map->e != 1 || map->c < 1)
	{
		ft_printerror("il manque un ellement a la carte");
		return (0);
	}
	return (1);
}

void	ft_printerror(char *msg)
{
	ft_printf("Error\n%s\n", msg);
}

int	map_dim(t_mapassets map)
{
	int	x;
	int	y;

	y = 0;
	while (map.map[y] != NULL)
	{
		x = 0;
		ft_printf("%s\n", map.map[y]);
		while (map.map[y][x] != '\0')
		{
			if ((map.map[y][x + 1] == '\0' && x + 1 != map.x
				&& map.map[y + 1] == NULL)
			|| (y == 0 && map.map[y][x] != '1')
			|| (y + 1 == map.y && map.map[y][x] != '1')
			|| (x == 0 && map.map[y][x] != '1')
			|| (x + 1 == map.x && map.map[y][x] != '1'))
			{
				ft_printerror("la map a un probleme de conception");
				return (0);
			}
			x++;
		}
		y++;
	}
	return (1);
}

int	map_starter(t_mapassets map)
{
	if (map_dim(map) == 0 || nombrerequis(&map) == 0 || maptester(&map) == 0)
	{
		ft_free2(&map);
		return (0);
	}
	return (1);
}
