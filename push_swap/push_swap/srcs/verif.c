/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 22:12:02 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/06 19:02:35 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_verif_double(t_lst *lst)
{
	int	i;
	int	j;

	i = 0;
	while (i <= lst->len - 1)
	{
		j = 0;
		while (j <= lst->len - 1)
		{
			if ((lst->lsta[i] == lst->lsta[j]) && i != j)
			{
				printerror("doublons");
				ft_free(lst);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	testchar(char **av)
{
	int	i;
	int	j;
	int	moins;

	i = 1;
	while (av[i] != NULL)
	{
		moins = 0;
		j = 0;
		while (av[i][j] != '\0')
		{
			if (av[i][j] == '-')
				moins++;
			if ((!(av[i][j] >= '0' && av[i][j] <= '9')
					&& av[i][j] != '-') || moins > 1)
			{
				printerror("mauvais argument");
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
