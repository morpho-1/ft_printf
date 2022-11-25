/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:24:30 by aylemrab          #+#    #+#             */
/*   Updated: 2022/11/21 17:34:07 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb < 10)
		len += ft_putchar(nb + '0');
	else if (nb > 9)
	{
		len += ft_putunbr(nb / 10);
		len += ft_putunbr(nb % 10);
	}
	return (len);
}
