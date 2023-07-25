/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:46:20 by lheinric          #+#    #+#             */
/*   Updated: 2023/03/02 13:35:36 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_types(va_list args, const char ch)
{
	int	len;

	len = 0;
	if (ch == 'c')
		len += ft_print_char(va_arg(args, int));
	else if (ch == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (ch == 'p')
		len += ft_putptr(va_arg(args, unsigned long long));
	else if (ch == 'd' || ch == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (ch == 'u')
		len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (ch == 'x' || ch == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), ch);
	else if (ch == '%')
		len += ft_print_pourcent();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len += ft_types(args, str[i + 1]);
			i++;
		}
		else
			len += ft_print_char(str[i]);
		i++;
	}
	return (len);
}
