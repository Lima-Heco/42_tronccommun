/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monalgo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 23:27:24 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/22 23:43:15 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	wherelis(t_lst *lst, int *lis)
{
	int	i;

	i = -1;
	while (lst->lsta[i] != lis[0])
		i++;
	return (i);
}

void	whilelis(t_lst *lst, int *listab, int lislength)
{
	int	i;
	int	j;

	lst->max = findmaxa(lst);
	i = 0;
	while (lst->lena > lislength)
	{
		i = 0;
		j = 0;
		while (i <= lislength - 1)
		{
			if (listab[i] == lst->lsta[0])
				j = 1;
			i++;
		}
		if (j == 1)
			ra(lst, 0);
		else if (j == 0)
			pb(lst);
	}
}

void	monalgo(t_lst *lst)
{
	int	lislength;
	int	*listab;

	findmin(lst);
	listab = findlis(lst->lsta, lst->lena - 1, &lislength);
	while (preset(lst, listab) == 0)
		(void)lst->i;
	while (preset2(lst, listab, lislength) == 0)
		(void)lst->i;
	listab = findlis(lst->lsta, lst->lena - 1, &lislength);
	whilelis(lst, listab, lislength);
	while (lst->lena - 1 != lst->len - 1)
	{
		goodb2a(lst);
		ra(lst, 0);
	}
	findmin(lst);
	while (triverif(lst->lsta, lst->lena - 1) == 0)
	{
		if (lst->mini <= lst->lena / 2)
			ra(lst, 0);
		else
			rra(lst, 0);
	}
	free(listab);
}
