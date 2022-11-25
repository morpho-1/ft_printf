/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:18:38 by aylemrab          #+#    #+#             */
/*   Updated: 2022/11/25 13:51:48 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>

int		ft_printf(const char *format, ...);
int		ft_putstr(char *s);
int		ft_putnbr(int nb);
int		ft_putchar(char c);
int		ft_puthexa(unsigned long nb, char c);
int		ft_putunbr(unsigned int nb);
int		ft_putptr(unsigned long nb);

#endif