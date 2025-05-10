/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:11:42 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/12 17:11:45 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	dnf2(unsigned int number, int *count)
{
	if (number >= 16)
		dnf2(number / 16, count);
	*count += ft_putchar("0123456789ABCDEF"[number % 16]);
}

int	print_hex_up(unsigned int number)
{
	int	count;

	count = 0;
	dnf2(number, &count);
	return (count);
}
