/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:07:04 by aylemrab          #+#    #+#             */
/*   Updated: 2022/11/25 15:20:00 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <string.h>

static int	ft_check_is_format(char c)
{
	if (c == 'd' || c == 'i' || c == 's' || c == 'x' || c == 'p')
		return (1);
	else if (c == 'c' || c == 'X' || c == 'u' || c == '%')
		return (1);
	return (0);
}

static int	ft_put_format(va_list args, char c)
{
	int		len;

	len = 0;
	if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 'x' || c == 'X')
		len += ft_puthexa(va_arg(args, unsigned int), c);
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'u')
		len += ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'p')
		len += ft_putptr(va_arg(args, unsigned long));
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	int			len;
	int			i;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (write(1, 0, 0) == -1)
			return (-1);
		if (format[i] == '%')
		{
			i++;
			if (ft_check_is_format(format[i]))
				len += ft_put_format(args, format[i]);
			else
				len += ft_putchar(format[i]);
			i++;
		}
		else
			len += ft_putchar(format[i++]);
	}
	return (va_end(args), len);
}
