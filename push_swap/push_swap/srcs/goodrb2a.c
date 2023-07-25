/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goodrb2a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 02:11:42 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/22 02:13:53 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	goodrb2a1(t_lst *lst)
{
	if ((lst->lstb[lst->lenb - 1] < lst->lsta[0]
			&& lst->lstb[lst->lenb - 1] > lst->lsta[lst->lena - 1])
		|| (triverif(lst->lsta, lst->lena - 1)
			&& lst->lstb[lst->lenb - 1] < lst->lsta[0])
		|| (triverif(lst->lsta, lst->lena - 1)
			&& lst->lstb[lst->lenb - 1] > findmaxa(lst)))
	{
		rrb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}

void	goodrb2a2(t_lst *lst)
{
	if ((lst->lstb[lst->lenb - 2] < lst->lsta[0]
			&& lst->lstb[lst->lenb - 2] > lst->lsta[lst->lena - 1])
		|| (triverif(lst->lsta, lst->lena - 1)
			&& lst->lstb[lst->lenb - 2] < lst->lsta[0])
		|| (triverif(lst->lsta, lst->lena - 1)
			&& lst->lstb[lst->lenb - 2] > findmaxa(lst)))
	{
		rrb(lst, 0);
		rrb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}

void	goodrb2a3(t_lst *lst)
{
	if ((lst->lstb[lst->lenb - 3] < lst->lsta[0]
			&& lst->lstb[lst->lenb - 3] > lst->lsta[lst->lena - 1])
		|| (triverif(lst->lsta, lst->lena - 1)
			&& lst->lstb[lst->lenb - 3] < lst->lsta[0])
		|| (triverif(lst->lsta, lst->lena - 1)
			&& lst->lstb[lst->lenb - 3] > findmaxa(lst)))
	{
		rrb(lst, 0);
		rrb(lst, 0);
		rrb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}

void	goodrb2a4(t_lst *lst)
{
	if ((lst->lstb[lst->lenb - 4] < lst->lsta[0]
			&& lst->lstb[lst->lenb - 4] > lst->lsta[lst->lena - 1])
		|| (triverif(lst->lsta, lst->lena - 1)
			&& lst->lstb[lst->lenb - 4] < lst->lsta[0])
		|| (triverif(lst->lsta, lst->lena - 1)
			&& lst->lstb[lst->lenb - 4] > findmaxa(lst)))
	{
		rrb(lst, 0);
		rrb(lst, 0);
		rrb(lst, 0);
		rrb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}

void	goodrb2a5(t_lst *lst)
{
	if ((lst->lstb[lst->lenb - 5] < lst->lsta[0]
			&& lst->lstb[lst->lenb - 5] > lst->lsta[lst->lena - 1])
		|| (triverif(lst->lsta, lst->lena - 1)
			&& lst->lstb[lst->lenb - 5] < lst->lsta[0])
		|| (triverif(lst->lsta, lst->lena - 1)
			&& lst->lstb[lst->lenb - 5] > findmaxa(lst)))
	{
		rrb(lst, 0);
		rrb(lst, 0);
		rrb(lst, 0);
		rrb(lst, 0);
		rrb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}
