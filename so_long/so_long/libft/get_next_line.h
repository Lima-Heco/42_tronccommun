/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:59:36 by lheinric          #+#    #+#             */
/*   Updated: 2023/03/24 14:50:23 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <sys/stat.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_strchrgnl(char *str, char c);
char	*get_next_line(int fd);
char	*ft_line(char *statsh);
char	*free_statsh(char *statsh);
char	*buff_and_read(int fd, char *statsh);
char	*ft_strjoingnl(char *s1, char *s2);
char	*ft_strdupgnl(char *s);
size_t	ft_strlengnl(char *str);

#endif
