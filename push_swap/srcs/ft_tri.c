/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:11:07 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/06 18:03:40 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	moovbot(int *lst, int i, int lstn)
{
	int	temp;

	if (i != lstn || i != lstn)
	{
		temp = lst[i];
		lst[i] = lst[i + 1];
		lst[i + 1] = temp;
	}
}

void	moovtop1(int *lst, int i)
{
	int	temp;

	if (i > 1)
	{
		temp = lst[i];
		lst[i] = lst[i - 1];
		lst[i - 1] = temp;
	}
}

void	moovtop0(int *lst, int i)
{
	int	temp;

	if (i > 0)
	{
		temp = lst[i];
		lst[i] = lst[i - 1];
		lst[i - 1] = temp;
	}
}

void	wmoovbot(int *lst, int lstn)
{
	int	temp;
	int	i;

	i = 0;
	while (i != lstn - 1)
	{
		temp = lst[i];
		lst[i] = lst[i + 1];
		lst[i + 1] = temp;
		i++;
	}
}
