/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:44:36 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/07 21:44:37 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_wd(const char *s, char c)
{
	size_t	wd;
	int		flag;

	wd = 0;
	flag = 1;
	while (*s)
	{
		if (*s == c)
			flag = 1;
		else
		{
			if (flag)
			{
				wd++;
				flag = 0;
			}
		}
		s++;
	}
	return (wd);
}

static int	ft_pick_place(char **arr, int pos, size_t buffer)
{
	int	i;

	i = 0;
	arr[pos] = malloc(buffer);
	if (arr[pos] == NULL)
	{
		while (i < pos)
		{
			free(arr[i]);
			i++;
		}
		free(arr);
		return (1);
	}
	return (0);
}

static int	ft_fill_strs(char **arr, const char *s, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len > 0)
		{
			if (ft_pick_place(arr, i, len + 1))
				return (1);
			ft_strlcpy(arr[i], s - len, len + 1);
			i++;
		}
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	size_t	word_count;
	char	**arr;

	if (s == NULL)
		return (NULL);
	word_count = ft_count_wd(s, c);
	arr = malloc((word_count + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr[word_count] = NULL;
	if (ft_fill_strs(arr, s, c))
		return (NULL);
	return (arr);
}
