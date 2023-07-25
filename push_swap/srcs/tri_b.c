/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_b.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:11:53 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/06 18:07:48 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_lst *lst, int ab)
{
	moovbot(lst->lstb, 0, lst->lenb);
	if (ab == 0)
		ft_printf("sb\n");
}

void	pb(t_lst *lst)
{
	int	temp2;
	int	i;

	i = lst->lenb;
	if (lst->lena > 0)
	{
		temp2 = lst->lstb[0];
		lst->lenb++;
		lst->lstb[0] = lst->lsta[0];
		if (lst->lenb > 1)
			lst->lstb[lst->lenb - 1] = temp2;
		lst->lsta[0] = 0;
		while (i > 0)
		{
			moovtop1(lst->lstb, i);
			i--;
		}
		wmoovbot(lst->lsta, lst->lena);
		lst->lena--;
		ft_printf("pb\n");
	}
}

void	rb(t_lst *lst, int ab)
{
	int	i;

	i = 0;
	if (lst->lenb > 1)
	{
		while (i < lst->lenb - 1)
		{
			moovbot(lst->lstb, i, lst->lenb);
			i++;
		}
		if (ab == 0)
			ft_printf("rb\n");
	}
}

void	rrb(t_lst *lst, int ab)
{
	int	i;

	i = lst->lenb;
	while (i > 0)
	{
		moovtop0(lst->lstb, i - 1);
		i--;
	}
	if (ab == 0)
		ft_printf("rrb\n");
}
