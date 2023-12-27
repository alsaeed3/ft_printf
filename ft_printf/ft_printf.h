/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:11:08 by alsaeed           #+#    #+#             */
/*   Updated: 2023/03/21 17:53:27 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

/* Format Specifiers Functions */
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		print_hex(unsigned int n, char c);
int		print_pointer(unsigned long n);
int		print_undec(unsigned int n);

/* ft_printf */
int		ft_printf(const char *str, ...);

#endif
