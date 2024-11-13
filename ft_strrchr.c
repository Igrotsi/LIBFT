/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:48:46 by flahalle          #+#    #+#             */
/*   Updated: 2024/11/13 19:19:04 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	c = (unsigned char)c;
	while (s[i])
		i++;
	while (i + 1 > 0)
	{
		if (((unsigned char *)s)[i] == c)
			return ((void *)(s + i));
		i--;
	}
	return (0);
}
