/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:05:45 by flahalle          #+#    #+#             */
/*   Updated: 2024/11/06 15:19:04 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t	i;
	i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}
int	main(void)
{
	printf("%ld", ft_strlen("test"));
	return (0);
}