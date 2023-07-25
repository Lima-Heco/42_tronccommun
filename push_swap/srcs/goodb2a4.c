/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goodb2a4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:43:38 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/22 01:47:16 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	goodb2a41(t_lst *lst)
{
	if (lst->lstb[4] < lst->lsta[0] && lst->lstb[4] > lst->lsta[lst->lena - 1])
	{
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}

void	goodb2a42(t_lst *lst)
{
	if (triverif(lst->lsta, lst->lena - 1) == 1 && lst->lstb[4] < lst->lsta[0])
	{
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}

void	goodb2a43(t_lst *lst)
{
	if (triverif(lst->lsta, lst->lena - 1) == 1
		&& (lst->lstb[4] > findmaxa(lst)))
	{
		rb(lst, 0);
		rb(lst, 0);
		rb(lst, 0);
		sb(lst, 0);
		pa(lst);
		goodb2a(lst);
	}
}

void	goodb2a4(t_lst *lst)
{
	goodb2a41(lst);
	goodb2a42(lst);
	goodb2a43(lst);
}
