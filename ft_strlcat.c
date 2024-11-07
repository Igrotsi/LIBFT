/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:25:41 by flahalle          #+#    #+#             */
/*   Updated: 2024/11/07 14:39:35 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlen(char *str)
{
 	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
size_t	ft_strlcat(char *dest, char *src, size_t size)
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
int	main(void)
{
	char	dest[50] = "Ca doit marquer preuve : ";
	char	src[] = "preuve";
	char	dest1[50] = "Ca doit marquer preuve : ";
	char	src1[] = "preuve";
 	size_t	size;
	
	size = 1;
	printf("%s %lu\n", dest, ft_strlcat(dest, src, size));
	printf("%s %zu", dest1, strlcat(dest1, src1, size));
}