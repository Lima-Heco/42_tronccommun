/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goodb2a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 02:09:47 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/22 02:09:49 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	goodb2ah(t_lst *lst)
{
	if (lst->lenb >= 13)
		goodb2a6(lst);
	if (lst->lenb >= 14)
		goodrb2a7(lst);
}

void	goodb2a(t_lst *lst)
{
	if (lst->lenb >= 1)
		goodb2a0(lst);
	if (lst->lenb >= 2)
		goodrb2a1(lst);
	if (lst->lenb >= 3)
		goodb2a1(lst);
	if (lst->lenb >= 4)
		goodrb2a2(lst);
	if (lst->lenb >= 5)
		goodb2a2(lst);
	if (lst->lenb >= 6)
		goodrb2a3(lst);
	if (lst->lenb >= 7)
		goodb2a3(lst);
	if (lst->lenb >= 7)
		goodrb2a4(lst);
	if (lst->lenb >= 9)
		goodb2a4(lst);
	if (lst->lenb >= 10)
		goodrb2a5(lst);
	if (lst->lenb >= 11)
		goodb2a5(lst);
	if (lst->lenb >= 12)
		goodrb2a6(lst);
	goodb2ah(lst);
}
