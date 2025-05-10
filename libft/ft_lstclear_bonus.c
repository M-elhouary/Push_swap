/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:23:05 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/08 12:23:06 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*n;
	t_list	*temp;

	if (!lst || !del)
		return ;
	n = *lst;
	while (n != NULL)
	{
		temp = n;
		n = n->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}
