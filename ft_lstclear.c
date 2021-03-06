/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 00:08:18 by qduong            #+#    #+#             */
/*   Updated: 2022/04/29 16:37:28 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*todel;

	current = *lst;
	if (lst)
	{
		while (current -> next != NULL)
		{
			todel = current;
			current = current -> next;
			(*del)(todel -> content);
			free(todel);
		}
		(*del)(current -> content);
		free(current);
	}
	*lst = NULL;
	return ;
}
