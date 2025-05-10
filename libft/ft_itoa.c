/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:22:56 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/08 12:22:57 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_fillstr(char *str, int n, int len)
{
	if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	while (n != 0)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		is_negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	is_negative = (n < 0);
	len = ft_count_digits(n) + is_negative;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (is_negative)
	{
		str[0] = '-';
		n = -n;
	}
	ft_fillstr(str + is_negative, n, len - is_negative);
	return (str);
}
