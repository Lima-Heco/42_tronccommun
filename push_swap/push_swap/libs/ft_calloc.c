/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:32:18 by lheinric          #+#    #+#             */
/*   Updated: 2023/02/16 18:50:38 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*str;

	if (num == 0 || size == 0)
		return (malloc(0));
	if (num > 65535 / size)
		return (NULL);
	str = malloc(num * size);
	if (!str)
		return (NULL);
	ft_bzero(str, num * size);
	return (str);
}
