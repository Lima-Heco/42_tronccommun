/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goodb2a6.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:53:01 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/22 02:09:14 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	goodb2a61(t_lst *lst)
{
	if (lst->lstb[6] < lst->lsta[0] && lst->lstb[6] > lst->lsta[lst->lena - 1])
	{
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}

void	goodb2a62(t_lst *lst)
{
	if (triverif(lst->lsta, lst->lena - 1) == 1 && lst->lstb[6] < lst->lsta[0])
	{
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}

void	goodb2a63(t_lst *lst)
{
	if (triverif(lst->lsta, lst->lena - 1) == 1
		&& (lst->lstb[6] > findmaxa(lst)))
	{
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}

void	goodb2a6(t_lst *lst)
{
	goodb2a61(lst);
	goodb2a62(lst);
	goodb2a63(lst);
}

void	goodrb2a6(t_lst *lst)
{
	if ((lst->lstb[lst->lenb - 6] < lst->lsta[0]
			&& lst->lstb[lst->lenb - 6] > lst->lsta[lst->lena - 1])
		|| (triverif(lst->lsta, lst->lena - 1)
			&& lst->lstb[lst->lenb - 6] < lst->lsta[0])
		|| (triverif(lst->lsta, lst->lena - 1)
			&& lst->lstb[lst->lenb - 6] > findmaxa(lst)))
	{
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
