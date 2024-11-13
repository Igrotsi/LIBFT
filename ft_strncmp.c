/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:05:11 by flahalle          #+#    #+#             */
/*   Updated: 2024/11/13 19:18:40 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (((unsigned char)*s1 == (unsigned char)*s2) && (*s1 && *s2)
		&& (n > 1))
	{
		s1++;
		s2++;
		n--;
	}
	return (((unsigned char)*s1 - (unsigned char)*s2));
}
