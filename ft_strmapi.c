/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:09:12 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/07 18:43:12 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			new;
	unsigned int	i;
	unsigned int	scpylen;

	if (!s || !f)
		return (NULL);
	scpylen = ft_strlen(s);
	i = 0;
	if (!(new = malloc(sizeof(char) * scpylen + 1)))
		return (NULL);
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
