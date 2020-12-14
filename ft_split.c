/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 09:34:02 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/11 14:58:29 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t			ft_word(char *scpy, char c)
{
	size_t				word;

	word = 0;
	while (*scpy == c)
		scpy++;
	while (*scpy)
	{
		if (*scpy == c && *(scpy - 1) != c)
			word += 1;
		scpy++;
	}
	if (*(scpy - 1) != c)
		word += 1;
	return (word);
}

static char				**ft_tab(char *s, char c, char **tab, size_t word)
{
	size_t				i;
	size_t				j;
	unsigned int		start;

	i = 0;
	j = 0;
	while (i < word)
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		if (!(tab[i++] = ft_substr((char *)s, start, (j - start))))
		{
			free(tab);
			return (NULL);
		}
	}
	tab[i] = NULL;
	return (tab);
}

char					**ft_split(char const *s, char c)
{
	char				**tab;
	size_t				word;

	if (!s || !c)
		return (NULL);
	word = ft_word((char *)s, c);
	if (!(tab = malloc(sizeof(char *) * (word + 1))))
		return (NULL);
	return (ft_tab((char *)s, c, tab, word));
}
