/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:07:52 by flahalle          #+#    #+#             */
/*   Updated: 2024/11/13 18:48:06 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	c = (unsigned char)c;
	while (s[i])
	{
		if (((unsigned char *)s)[i] == c)
			return ((void *)(s + i));
		i++;
	}
	if (c == '\0')
		return ((void *)(s + i));
	return (0);
}
