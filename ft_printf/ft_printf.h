/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:47:14 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/07 21:47:15 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putnbr(long nb);
int	ft_putstr(char *str);
int	print_add_p(void *ptr);
int	print_hex_low(unsigned int number);
int	print_hex_up(unsigned int number);
int	ft_printf(const char *str, ...);

#endif