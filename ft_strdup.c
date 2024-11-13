/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:39:38 by flahalle          #+#    #+#             */
/*   Updated: 2024/11/13 20:45:21 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (dest == NULL)
		return (0);
	else
	{
		while (s[i])
		{
			dest[i] = s[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
