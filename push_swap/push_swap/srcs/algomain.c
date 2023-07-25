/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algomain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:38:11 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/22 01:24:22 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	algo3(t_lst *lst)
{
	if (lst->len == 3)
	{
		if (lst->lsta[0] > lst->lsta[1] && lst->lsta[1] < lst->lsta[2])
			sa(lst, 0);
		else if (lst->lsta[0] > lst->lsta[1] && lst->lsta[1] > lst->lsta[2])
		{
			ra(lst, 0);
			sa(lst, 0);
		}
		else if (lst->lsta[0] < lst->lsta[1] && lst->lsta[1] > lst->lsta[2])
			rra(lst, 0);
		return (1);
	}
	return (0);
}

int	algo2(t_lst *lst)
{
	if (lst->len == 2)
	{
		if (lst->lsta[0] > lst->lsta[1])
		{
			sa(lst, 0);
			return (1);
		}
	}
	return (0);
}

void	algomain(t_lst *lst)
{
	if (algo2(lst) == 1)
		return ;
	else if (algo3(lst) == 1)
		return ;
	else
	{
		monalgo(lst);
	}
	return ;
}
