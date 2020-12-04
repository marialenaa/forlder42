/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:48:46 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/04 23:57:41 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t j;

	j = 0;
	if (len && s && len)
	{
		if (!(str = malloc((len + 1) * sizeof(char))))
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
