/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:23:35 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/08 12:23:36 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr2 = (unsigned char *)src;
	ptr1 = (unsigned char *)dest;
	i = 0;
	if (src == dest || len == 0)
		return (dest);
	if (ptr1 > ptr2)
	{
		while (len-- > 0)
			ptr1[len] = ptr2[len];
	}
	else
	{
		while (i < len)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
	}
	return (dest);
}
