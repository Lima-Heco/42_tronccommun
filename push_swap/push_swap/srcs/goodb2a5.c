/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goodb2a5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:48:23 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/22 01:50:01 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	goodb2a51(t_lst *lst)
{
	if (lst->lstb[5] < lst->lsta[0] && lst->lstb[5] > lst->lsta[lst->lena - 1])
	{
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}

void	goodb2a52(t_lst *lst)
{
	if (triverif(lst->lsta, lst->lena - 1) == 1 && lst->lstb[5] < lst->lsta[0])
	{
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}

void	goodb2a53(t_lst *lst)
{
	if (triverif(lst->lsta, lst->lena - 1) == 1
		&& (lst->lstb[5] > findmaxa(lst)))
	{
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}

void	goodb2a5(t_lst *lst)
{
	goodb2a51(lst);
	goodb2a52(lst);
	goodb2a53(lst);
}

void	goodrb2a7(t_lst *lst)
{
	if ((lst->lstb[lst->lenb - 7] < lst->lsta[0]
			&& lst->lstb[lst->lenb - 7] > lst->lsta[lst->lena - 1])
		|| (triverif(lst->lsta, lst->lena - 1)
			&& lst->lstb[lst->lenb - 7] < lst->lsta[0])
		|| (triverif(lst->lsta, lst->lena - 1)
			&& lst->lstb[lst->lenb - 7] > findmaxa(lst)))
	{
		rrb(lst, 0);
		rrb(lst, 0);
		rrb(lst, 0);
		rrb(lst, 0);
		rrb(lst, 0);
		rrb(lst, 0);
		rrb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}
