/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:47:20 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/07 21:47:21 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	dnf1(long number, int *count)
{
	if (number >= 10)
		dnf1(number / 10, count);
	*count += ft_putchar(number % 10 + '0');
}

int	ft_putnbr(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	dnf1(nb, &count);
	return (count);
}
