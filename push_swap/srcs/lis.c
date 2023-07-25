/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lima <lima@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:04:05 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/22 17:27:50 by lima             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	lisinit(int n, t_lis *lis)
{
	lis->lis = (int *)malloc(sizeof(int) * n);
	lis->previousindex = (int *)malloc(sizeof(int) * n);
	lis->maxlength = 1;
	lis->endindex = 0;
	lis->lis[0] = 1;
	lis->previousindex[0] = -1;
	lis->i = 1;
}

void	liswhile2(t_lis *lis)
{
	if (lis->currentlis > lis->lis[lis->i])
	{
		lis->lis[lis->i] = lis->currentlis;
		lis->previousindex[lis->i] = lis->j;
		if (lis->currentlis > lis->maxlength)
		{
			lis->maxlength = lis->currentlis;
			lis->endindex = lis->i;
		}
	}
}

void	liswhile1(int arr[], int n, t_lis *lis)
{
	while (lis->i < n)
	{
		lis->lis[lis->i] = 1;
		lis->previousindex[lis->i] = -1;
		lis->j = 0;
		while (lis->j < lis->i)
		{
			if (arr[lis->i] > arr[lis->j])
			{
				lis->currentlis = lis->lis[lis->j] + 1;
				liswhile2(lis);
			}
			lis->j++;
		}
		lis->i++;
	}
}

int	*findlis(int arr[], int n, int *lisLength)
{
	t_lis	lis;

	lisinit(n, &lis);
	liswhile1(arr, n, &lis);
	lis.liselements = (int *)malloc(sizeof(int) * lis.maxlength);
	lis.currentindex = lis.endindex;
	lis.j = lis.maxlength - 1;
	while (lis.j >= 0)
	{
		lis.liselements[lis.j] = arr[lis.currentindex];
		lis.currentindex = lis.previousindex[lis.currentindex];
		lis.j--;
	}
	free(lis.lis);
	free(lis.previousindex);
	*lisLength = lis.maxlength;
	return (lis.liselements);
}
