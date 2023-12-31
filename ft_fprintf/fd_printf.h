/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:26:58 by lheinric          #+#    #+#             */
/*   Updated: 2023/11/05 12:27:35 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FD_PRINTF_H
# define FD_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int		fd_printf(int fd, const char *str, ...);
int		fd_putnbru(int fd, unsigned int n);
int		fd_putnbr_base(int fd, unsigned long long n, char *base);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int		fd_putstr_fd(char *s, int fd);
int		fd_putchar_fd(char c, int fd);
int		fd_putnbr_fd(long long n, int fd);
int		fd_pttostr(int fd, unsigned long long n);

#endif
