/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:24:29 by flahalle          #+#    #+#             */
/*   Updated: 2024/11/22 20:40:28 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*newlist;

	temp = lst;
	if (lst == NULL)
		return ;
	if (f == NULL)
		return ;
	while (temp)
	{
		ft_lstnew(lst->content);
		ft_lstiter(lst, f);
		ft_lstclear(lst, del);
	}
}
