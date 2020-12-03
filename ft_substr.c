/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:48:46 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/03 17:01:50 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	unsigned int j;

	j = 0;
	if (len == 0)
		return (NULL);
	if (!(str = malloc((len + 1) * sizeof(char))))
			return (NULL);
	while (start < len)
	{
		str[j] = s[start + j];
		len--;
		j++;
	}
	str[j] = '\0';
	return (str);
}
