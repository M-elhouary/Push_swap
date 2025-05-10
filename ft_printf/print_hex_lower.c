/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:11:33 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/12 17:11:37 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	dnf3(unsigned int number, int *count)
{
	if (number >= 16)
		dnf3(number / 16, count);
	*count += ft_putchar("0123456789abcdef"[number % 16]);
}

int	print_hex_low(unsigned int number)
{
	int	count;

	count = 0;
	dnf3(number, &count);
	return (count);
}
