/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:09:39 by aylemrab          #+#    #+#             */
/*   Updated: 2022/11/25 14:40:55 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int		len;
	long	a;

	len = 0;
	a = nb;
	if (nb < 0)
	{
		a = -a;
		len += ft_putchar('-');
	}
	if (a < 10)
		len += ft_putchar(a + '0');
	else
	{
		len += ft_putnbr(a / 10);
		len += ft_putnbr(a % 10);
	}
	return (len);
}
