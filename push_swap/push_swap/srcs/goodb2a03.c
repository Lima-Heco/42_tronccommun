/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goodb2a03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:28:42 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/22 01:42:44 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	goodb2a0(t_lst *lst)
{
	if ((lst->lstb[0] < lst->lsta[0]
			&& lst->lstb[0] > lst->lsta[lst->lena - 1]))
	{
		pa(lst);
		goodb2a(lst);
	}
	if (triverif(lst->lsta, lst->lena - 1) == 1
		&& lst->lstb[0] < lst->lsta[0])
	{
		pa(lst);
		goodb2a(lst);
	}
	if (triverif(lst->lsta, lst->lena - 1) == 1
		&& (lst->lstb[0] > findmaxa(lst)))
	{
		pa(lst);
		goodb2a(lst);
	}
}

void	goodb2a1(t_lst *lst)
{
	if (lst->lstb[1] < lst->lsta[0] && lst->lstb[1] > lst->lsta[lst->lena - 1])
	{
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
	if (triverif(lst->lsta, lst->lena - 1) == 1 && lst->lstb[1] < lst->lsta[0])
	{
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
	if (triverif(lst->lsta, lst->lena - 1) == 1
		&& (lst->lstb[1] > findmaxa(lst)))
	{
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}

void	goodb2a2(t_lst *lst)
{
	if (lst->lstb[2] < lst->lsta[0] && lst->lstb[2] > lst->lsta[lst->lena - 1])
	{
		rb(lst, 0);
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
	if (triverif(lst->lsta, lst->lena - 1) == 1 && lst->lstb[2] < lst->lsta[0])
	{
		rb(lst, 0);
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
	if (triverif(lst->lsta, lst->lena - 1) == 1
		&& (lst->lstb[2] > findmaxa(lst)))
	{
		rb(lst, 0);
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}

void	goodb2a3(t_lst *lst)
{
	if (lst->lstb[3] < lst->lsta[0] && lst->lstb[3] > lst->lsta[lst->lena - 1])
	{
		rb(lst, 0);
		rb(lst, 0);
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
	if (triverif(lst->lsta, lst->lena - 1) == 1 && lst->lstb[3] < lst->lsta[0])
	{
		rb(lst, 0);
		rb(lst, 0);
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
	if (triverif(lst->lsta, lst->lena - 1) == 1
		&& (lst->lstb[3] > findmaxa(lst)))
	{
		rb(lst, 0);
		rb(lst, 0);
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}
