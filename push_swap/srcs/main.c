/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lima <lima@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:35:28 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/22 17:28:47 by lima             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	printerror(char *str)
{
	ft_printf("Error\n%s\n", str);
}

void	ft_free(t_lst *lst)
{
	if (lst->lsta)
		free(lst->lsta);
	if (lst->lstb)
		free(lst->lstb);
	lst->free_signal = 1;
}

int	main(int argc, char **argv)
{
	t_lst	lst;

	lst.free_signal = 0;
	if (testchar(argv) == 0 || argc < 3 || startpush(argc, argv, &lst) == 0)
		return (0);
	algomain(&lst);
	if (lst.free_signal == 0)
		ft_free(&lst);
	return (0);
}
