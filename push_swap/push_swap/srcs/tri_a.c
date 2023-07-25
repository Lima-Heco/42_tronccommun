/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 23:17:49 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/06 18:07:09 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_lst *lst, int ab)
{
	moovbot(lst->lsta, 0, lst->lena);
	if (ab == 0)
		ft_printf("sa\n");
}

void	pa(t_lst *lst)
{
	int	temp2;
	int	i;

	i = lst->lena;
	if (lst->lenb > 0)
	{
		temp2 = lst->lsta[0];
		lst->lena++;
		lst->lsta[0] = lst->lstb[0];
		if (lst->lena > 1)
			lst->lsta[lst->lena - 1] = temp2;
		lst->lstb[0] = 0;
		while (i > 0)
		{
			moovtop1(lst->lsta, i);
			i--;
		}
		wmoovbot(lst->lstb, lst->lenb);
		lst->lenb--;
		ft_printf("pa\n");
	}
}

void	ra(t_lst *lst, int ab)
{
	int	i;

	i = 0;
	if (lst->lena > 1)
	{
		while (i < lst->lena - 1)
		{
			moovbot(lst->lsta, i, lst->lena);
			i++;
		}
		if (ab == 0)
			ft_printf("ra\n");
	}
}

void	rra(t_lst *lst, int ab)
{
	int	i;

	i = lst->lena;
	while (i > 0)
	{
		moovtop0(lst->lsta, i - 1);
		i--;
	}
	if (ab == 0)
		ft_printf("rra\n");
}
