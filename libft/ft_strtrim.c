/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:24:29 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/08 12:24:30 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	st;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	st = 0;
	while (s1[st] != '\0' && ft_strchr(set, s1[st]))
		st++;
	end = ft_strlen(s1);
	while (end > st && ft_strchr(set, s1[end - 1]))
		end--;
	str = malloc(end - st + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, &s1[st], end - st + 1);
	return (str);
}
