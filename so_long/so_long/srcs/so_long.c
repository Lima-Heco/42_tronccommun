/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lima <lima@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:10:37 by lheinric          #+#    #+#             */
/*   Updated: 2023/06/12 15:38:39 by lima             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_printf("votre map rentee es bien %s\n", argv[1]);
		starter(argv[1]);
	}
	else
	{
		ft_printerror("tu dois entrer un fichier .ber");
		return (1);
	}
	return (0);
}
