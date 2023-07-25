/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 23:40:33 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/22 23:40:35 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	preset4(t_lst *lst, int *lis)
{
	if (lst->lsta[lst->lena - 2] < lis[0])
	{
		rra(lst, 0);
		rra(lst, 0);
		sa(lst, 0);
		ra(lst, 0);
		return (0);
	}
	if (lst->lsta[lst->lena - 3] < lis[0])
	{
		rra(lst, 0);
		rra(lst, 0);
		rra(lst, 0);
		sa(lst, 0);
		ra(lst, 0);
		sa(lst, 0);
		ra(lst, 0);
		return (0);
	}
	return (1);
}

int	preset3(t_lst *lst, int *lis)
{
	if (lst->lsta[4] < lis[0] && 4 > wherelis(lst, lis))
	{
		ra(lst, 0);
		ra(lst, 0);
		ra(lst, 0);
		sa(lst, 0);
		rra(lst, 0);
		rra(lst, 0);
		rra(lst, 0);
		return (0);
	}
	if (lst->lsta[lst->lena - 1] < lis[0])
	{
		rra(lst, 0);
		return (0);
	}
	return (1);
}

int	preset(t_lst *lst, int *lis)
{
	if (lst->lsta[1] < lis[0] && 1 > wherelis(lst, lis))
	{
		sa(lst, 0);
		return (0);
	}
	if (lst->lsta[2] < lis[0] && 2 > wherelis(lst, lis))
	{
		ra(lst, 0);
		sa(lst, 0);
		rra(lst, 0);
		return (0);
	}
	if (lst->lsta[3] < lis[0] && 3 > wherelis(lst, lis))
	{
		ra(lst, 0);
		ra(lst, 0);
		sa(lst, 0);
		rra(lst, 0);
		rra(lst, 0);
		return (0);
	}
	if (preset3(lst, lis) == 0 || preset4(lst, lis) == 0)
		return (0);
	return (1);
}
