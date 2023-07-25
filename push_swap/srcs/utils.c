/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 23:40:26 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/22 23:40:28 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	triverif(int *lst, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (lst[i] > lst[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	findminindex(int *lst, int n)
{
	int	i;

	i = 0;
	while (lst[i] != lst[n])
	{
		i++;
	}
	return (i);
}

void	findmin(t_lst *lst)
{
	int	min;
	int	i;

	i = 0;
	min = lst->lsta[0];
	while (i < lst->lena)
	{
		if (lst->lsta[i] < min)
			min = lst->lstb[i];
		i++;
	}
	lst->min = min;
	lst->mini = findminindex(lst->lsta, min);
}

int	findmaxa(t_lst *lst)
{
	int	max;
	int	i;

	i = 0;
	max = lst->lsta[0];
	while (i < lst->lena)
	{
		if (lst->lsta[i] > max)
			max = lst->lsta[i];
		i++;
	}
	return (max);
}

int	preset2(t_lst *lst, int *lis, int lenlis)
{
	if (lst->lsta[0] > lis[lenlis])
	{
		ra(lst, 0);
		return (0);
	}
	if (lst->lsta[1] > lis[lenlis])
	{
		sa(lst, 0);
		ra(lst, 0);
	}
	if (lst->lsta[2] > lis[lenlis])
	{
		ra(lst, 0);
		sa(lst, 0);
		rra(lst, 0);
		sa(lst, 0);
		ra(lst, 0);
		return (0);
	}
	return (1);
}
