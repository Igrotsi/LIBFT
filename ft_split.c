/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:31:22 by flahalle          #+#    #+#             */
/*   Updated: 2024/11/21 20:15:25 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_words(const char *s, char c, size_t words)
{
	int	i;
	size_t 	j;
	size_t	len;

	j = 0;
	i = 0;
	len = 0;
	while (j - 1 != words)
	{
		if (s[i] != c && (s [i + 1] == c || s[i + 1] == '\0'))
		{
			j++;
		}
		i++;
	}
	while (s[i -= 1] && s[i] != c)
		len++;
	return (len);
}
static unsigned  int	get_start(const char *s, char c, size_t words)
{
	unsigned int	i;
	size_t 	j;

	j = 0;
	i = 0;
	while (j != words)
	{
		if (s[i] != c && (s [i + 1] == c || s[i + 1] == '\0'))
			j++;
		i++;
	}
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	j;

	if (!s || !c)
		return (0);
	j = 0;
	i = 0;
	while (s[i++])
	{
		if (s[i] && ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c))
			j++;
	}
	return (j);
}
static void	free_malloc(char **s)
{
	int	i;
	
	i = 0;
	while(s[i])
		free(s[i++]);
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char            **strs;
	unsigned int    j;

	if (!s)
		return (NULL);
	j = 0;
	printf("deaksibdfols");
	strs = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strs)
		return (NULL);
	if (count_words(s, c) == 0)
		return (strs);
	while (j <= count_words(s, c) - 1)
	{
		strs[j] = malloc(sizeof(char) * (count_words(s, c) + 1));
		if (!strs[j])
		{
			free_malloc(strs);
			return (NULL);
		}
		strs[j] = ft_substr(s, get_start(s, c, j), len_words(s, c, j));
		j++;
	}
	strs[j] =  NULL;
	return (strs);
}
/* int main() {
    char str[] = "\0aaa\0bbbbb";
    char **result;
    size_t i = 0;

    result = ft_split(str, '\0');  // Séparation des mots par des espaces

    if (result) {
        while (result[i] != NULL) {
            printf("Mot %zu: %s\n", i + 1, result[i]);
            free(result[i]);  // Libérer chaque mot après l'avoir affiché
            i++;
        }
        free(result);  // Libérer le tableau de chaînes
    }

    return 0;
}
 */


int  main(void)
{
    // ft_split
    printf("Test de ft_split:\n\n");
        char const    *str_to_split = NULL;
    char        sep = '\0';
    int        lensplit = 0;
    int        isplit;
    char    **tab = ft_split(str_to_split, sep);
    if (tab == NULL)
	printf("Cestbon");

    while (tab[lensplit])
        lensplit++;
    
    printf("Test de ft_split sur la chaine [%s] avec comme separateur [%c]:\n", str_to_split, sep);
    printf("        Résultat : [");
    for (isplit = 0; isplit < lensplit; isplit++)
    {
        printf("\"%s\"", tab[isplit]);
        if (isplit != lensplit - 1)
            printf(", ");
    }
    printf("]\n");
    free_malloc(tab);
    printf("\n___________________________________________________________\n\n");
}