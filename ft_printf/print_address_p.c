/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address_p.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:11:23 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/12 17:11:27 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	dnf(unsigned long number, int *count)
{
	if (number >= 16)
		dnf(number / 16, count);
	*count += ft_putchar("0123456789abcdef"[number % 16]);
}

int	print_add_p(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (write(1, "0x0", 3));
	count += write(1, "0x", 2);
	dnf((unsigned long)ptr, &count);
	return (count);
}
