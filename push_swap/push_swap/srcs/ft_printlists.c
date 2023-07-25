/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlists.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:34:54 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/06 18:01:27 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	printlst(t_lst *lst)
{
	int	i;

	i = 0;
	ft_printf("len = %d\n", lst->len);
	while (i <= lst->len - 1)
	{
		if (i <= lst->lena - 1)
			ft_printf("%d", lst->lsta[i]);
		else
			ft_printf(" ");
		ft_printf(" | ");
		if (i <= lst->lenb - 1)
			ft_printf("%d", lst->lstb[i]);
		ft_printf("\n");
		i++;
	}
}
