/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:19:31 by aylemrab          #+#    #+#             */
/*   Updated: 2022/11/23 14:15:02 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long nb, char c)
{
	int		len;
	char	*str;

	len = 0;
	if (c == 'X')
		str = "0123456789ABCDEF";
	else
		str = "0123456789abcdef";
	if (nb < 16)
		len += ft_putchar(str[nb]);
	else
	{
		len += ft_puthexa(nb / 16, c);
		len += ft_puthexa(nb % 16, c);
	}
	return (len);
}
