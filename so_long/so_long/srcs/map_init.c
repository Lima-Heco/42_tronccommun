/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 13:34:29 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/04 15:21:41 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	y_maps(char *map_txt)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map_txt[i] != '\0')
	{
		if (map_txt[i] == '1' && map_txt[1 + i] == '\n')
			j++;
		i++;
	}
	ft_printf("hauteure : %d\n", j + 1);
	return (j + 1);
}

int	x_maps(char *map_txt)
{
	int	i;

	i = 0;
	while (map_txt[i] != '\n')
	{
		i++;
	}
	ft_printf("largeure : %d\n", i);
	return (i);
}

int	ft_op(char *fd)
{
	int	op;

	op = open(fd, O_RDONLY);
	if (op == -1)
	{
		ft_printerror("je n'arrive pas a ouvrir");
	}
	return (op);
}

int	ft_pretrequis(char *map, t_mapassets *maps)
{
	int	i;

	i = 0;
	maps->p = 0;
	maps->e = 0;
	maps->c = 0;
	while (map[i] != '\0')
	{
		if (map[i] == 'C')
			maps->c += 1;
		if (map[i] == 'E')
			maps->e += 1;
		if (map[i] == 'P')
			maps->p += 1;
		if (map[i] != 'P' && map[i] != 'E' && map[i] != 'C'
			&& map[i] != '1' && map[i] != '0' && map[i] != '\n')
		{
			ft_printerror("il y a un mauvais argument");
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_open(char *fd, t_mapassets *maps)
{
	char	*buf;
	char	*str;

	maps->op = ft_op(fd);
	if (maps->op <= 0)
		return (0);
	buf = get_next_line(maps->op);
	str = ft_calloc(1, 1);
	while (buf != NULL)
	{
		str = ft_strjoin(str, buf, 3);
		buf = get_next_line(maps->op);
	}
	maps->map = ft_split(str, '\n');
	maps->x = x_maps(str);
	maps->y = y_maps(str);
	close(maps->op);
	if (ft_pretrequis(str, maps) == 0)
	{
		free(str);
		ft_free2(maps);
		return (0);
	}
	free(str);
	return (1);
}
