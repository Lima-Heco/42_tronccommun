/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dirrection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lima <lima@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:07:05 by lheinric          #+#    #+#             */
/*   Updated: 2023/06/15 18:02:07 by lima             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_exit(t_mlassets *param)
{
	if (param->c_added == param->c)
	{
		ft_printf("coup %d\n", param->pas++);
		end(param);
	}
}

void	go_top(t_mlassets *param)
{
	int	x;
	int	y;

	x = param->x_p;
	y = param->y_p - 1;
	if (param->map[y][x] == '0' || param->map[y][x] == 'C')
	{
		if (param->map[y][x] == 'C')
			param->c_added++;
		ft_printf("coup %d\n", param->pas++);
		param->map[y][x] = 'P';
		param->map[param->y_p][param->x_p] = '0';
	}
	put_img(param);
	if (param->map[y][x] == 'E')
		ft_exit(param);
}

void	go_bot(t_mlassets *param)
{
	int	x;
	int	y;

	x = param->x_p;
	y = param->y_p + 1;
	if (param->map[y][x] == '0' || param->map[y][x] == 'C')
	{
		if (param->map[y][x] == 'C')
			param->c_added++;
		ft_printf("coup %d\n", param->pas++);
		param->map[y][x] = 'P';
		param->map[param->y_p][param->x_p] = '0';
	}
	put_img(param);
	if (param->map[y][x] == 'E')
		ft_exit(param);
}

void	go_right(t_mlassets *param)
{
	int	x;
	int	y;

	x = param->x_p + 1;
	y = param->y_p;
	if (param->map[y][x] == '0' || param->map[y][x] == 'C')
	{
		if (param->map[y][x] == 'C')
			param->c_added++;
		ft_printf("coup %d\n", param->pas++);
		param->map[y][x] = 'P';
		param->map[param->y_p][param->x_p] = '0';
	}
	put_img(param);
	if (param->map[y][x] == 'E')
		ft_exit(param);
}

void	go_left(t_mlassets *param)
{
	int	x;
	int	y;

	x = param->x_p - 1;
	y = param->y_p;
	if (param->map[y][x] == '0' || param->map[y][x] == 'C')
	{
		if (param->map[y][x] == 'C')
			param->c_added++;
		ft_printf("coup %d\n", param->pas++);
		param->map[y][x] = 'P';
		param->map[param->y_p][param->x_p] = '0';
	}
	put_img(param);
	if (param->map[y][x] == 'E')
		ft_exit(param);
}
