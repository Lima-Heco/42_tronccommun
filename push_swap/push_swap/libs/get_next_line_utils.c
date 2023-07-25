/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:11:43 by lheinric          #+#    #+#             */
/*   Updated: 2023/03/24 14:55:08 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlengnl(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strchrgnl(char *str, char c)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	if (str[i] == c)
		return (1);
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdupgnl(char *s)
{
	char	*tab;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	tab = (char *)(malloc(sizeof(char) * (ft_strlengnl(s) + 1)));
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_strjoingnl(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	i = -1;
	j = 0;
	str = malloc(sizeof(char) * ((ft_strlengnl(s1) + ft_strlengnl(s2)) + 1));
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	free(s1);
	return (str);
}
