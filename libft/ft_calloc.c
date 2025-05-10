/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:44:18 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/07 21:44:19 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ar;
	size_t	len;

	if (size && (count * size) / size != count)
		return (NULL);
	len = count * size;
	ar = malloc(len);
	if (!ar)
		return (NULL);
	ft_bzero(ar, len);
	return (ar);
}
