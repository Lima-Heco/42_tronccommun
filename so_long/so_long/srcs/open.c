/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lima <lima@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:17:05 by lheinric          #+#    #+#             */
/*   Updated: 2023/06/15 17:54:32 by lima             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_putx(t_mapassets *maps, char **map, int y, int x)
{
	if (map[y][x] == 'X' && map[y][x + 1] == '0')
	{
		map[y][x + 1] = 'X';
		ft_mur(maps, map);
	}
	else if (map[y][x] == 'X' && map[y][x - 1] == '0')
	{
		map[y][x - 1] = 'X';
		ft_mur(maps, map);
	}
	else if (map[y][x] == 'X' && map[y + 1][x] == '0')
	{
		map[y + 1][x] = 'X';
		ft_mur(maps, map);
	}
	else if (map[y][x] == 'X' && map[y - 1][x] == '0')
	{
		map[y - 1][x] = 'X';
		ft_mur(maps, map);
	}
}

void	ft_countc(t_mapassets *maps, char **map, int y, int x)
{
	if (map[y][x] == 'X' && map[y][x + 1] == 'C')
	{
		maps->cv += 1;
		map[y][x + 1] = 'X';
		ft_collectibles(maps, map);
	}
	else if (map[y][x] == 'X' && map[y][x - 1] == 'C')
	{
		maps->cv += 1;
		map[y][x - 1] = 'X';
		ft_collectibles(maps, map);
	}
	else if (map[y][x] == 'X' && map[y + 1][x] == 'C')
	{
		maps->cv += 1;
		map[y + 1][x] = 'X';
		ft_collectibles(maps, map);
	}
	else if (map[y][x] == 'X' && map[y - 1][x] == 'C')
	{
		maps->cv += 1;
		map[y - 1][x] = 'X';
		ft_collectibles(maps, map);
	}
}

void	ft_counte(t_mapassets *maps, char **map, int y, int x)
{
	if (map[y][x] == 'X' && map[y][x + 1] == 'E')
	{
		maps->ev += 1;
		map[y][x + 1] = 'X';
		ft_sorties(maps, map);
	}
	else if (map[y][x] == 'X' && map[y][x - 1] == 'E')
	{
		maps->ev += 1;
		map[y][x - 1] = 'X';
		ft_sorties(maps, map);
	}
	else if (map[y][x] == 'X' && map[y + 1][x] == 'E')
	{
		maps->ev += 1;
		map[y + 1][x] = 'X';
		ft_sorties(maps, map);
	}
	else if (map[y][x] == 'X' && map[y - 1][x] == 'E')
	{
		maps->ev += 1;
		map[y - 1][x] = 'X';
		ft_sorties(maps, map);
	}
}

void	ft_free3(char **map)
{
	int	y;

	y = 0;
	while (map[y] != NULL)
	{
		free(map[y]);
		y++;
	}
	free(map);
}

int	maptester(t_mapassets *maps)
{
	char	*buf;
	char	*str;
	char	**map;

	maps->op = ft_op(maps->map_name);
	buf = get_next_line(maps->op);
	str = ft_calloc(1, 1);
	while (buf != NULL)
	{
		str = ft_strjoin(str, buf, 3);
		buf = get_next_line(maps->op);
	}
	map = ft_split(str, '\n');
	free(str);
	finds_pl(maps, map);
	map[maps->y_p][maps->x_p] = 'X';
	ft_mur(maps, map);
	ft_collectibles(maps, map);
	ft_sorties(maps, map);
	ft_free3(map);
	if (maps->cv == maps->c && maps->ev == maps->e)
		return (1);
	ft_printerror("la map n'est pas valide");
	return (0);
}
