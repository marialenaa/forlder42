/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:29:01 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/03 19:21:01 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_strdup(const char *s)
{
	char	*cpy;
	size_t	i;
	size_t	length;

	cpy = NULL;
	i = 0;
	length = ft_strlen(s);
	cpy = malloc(sizeof(char) * length);
	if (cpy == NULL)
		return (NULL);
	while (i++ < length - 1)
		cpy[i] = s[i];
	cpy[i] = '\0';
	return (cpy);
}
