/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:48:46 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/11 09:41:21 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	j;

	j = 0;
	if (s)
	{
		if (!(str = malloc(sizeof(char) * (len + 1))))
			return (NULL);
		if (start >= ft_strlen(s))
			return (str);
		while (j < len)
		{
			str[j] = s[start + j];
			j++;
		}
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
