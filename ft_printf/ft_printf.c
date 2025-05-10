/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:47:11 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/07 21:47:12 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_case(char type, va_list ap)
{
	if (!type)
		return (0);
	else if (type == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (type == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (type == 'x')
		return (print_hex_low(va_arg(ap, unsigned int)));
	else if (type == 'X')
		return (print_hex_up(va_arg(ap, unsigned int)));
	else if (type == 'u')
		return (ft_putnbr(va_arg(ap, unsigned int)));
	else if (type == 'p')
		return (print_add_p(va_arg(ap, void *)));
	else if (type == '%')
		return (ft_putchar('%'));
	else
		return (ft_putchar(type));
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, str);
	if (write(1, 0, 0) == -1)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
			count += handle_case(str[++i], ap);
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
