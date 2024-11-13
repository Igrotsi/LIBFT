/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:25:41 by flahalle          #+#    #+#             */
/*   Updated: 2024/11/13 13:09:54 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	len2;

	len2 = ft_strlen(src);
	len = ft_strlen(dest);
	i = 0;
	if (size == 0 || size < len)
		return (len2 + size);
	while (src[i] && (len + i) < size - 1)
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (len + len2);
}
