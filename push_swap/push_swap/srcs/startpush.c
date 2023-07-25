/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startpush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:42:46 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/06 19:02:36 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	flood_push(char **av, t_lst *lst)
{
	int	i;

	i = 0;
	while (av[i + 1] != NULL)
	{
		lst->lsta[i] = ft_atoi(av[i + 1]);
		i++;
	}
	i = 0;
	while (i <= lst->len - 1)
	{
		lst->lstb[i] = 0;
		i++;
	}
}

int	startpush(int ac, char **av, t_lst *lst)
{
	lst->len = ac - 1;
	lst->lena = lst->len;
	lst->lenb = 0;
	lst->lsta = malloc(sizeof(int) * (lst->len));
	lst->lstb = malloc(sizeof(int) * (lst->len));
	flood_push(av, lst);
	if (ft_verif_double(lst) == 0)
		return (0);
	return (1);
}
