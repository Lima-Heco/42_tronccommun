/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_ab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:30:06 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/06 18:05:30 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_lst *lst)
{
	sa(lst, 1);
	sb(lst, 1);
	ft_printf("ss\n");
}

void	rr(t_lst *lst)
{
	ra(lst, 1);
	rb(lst, 1);
	ft_printf("rr\n");
}

void	rrr(t_lst *lst)
{
	rra(lst, 1);
	rrb(lst, 1);
	ft_printf("rrr\n");
}
