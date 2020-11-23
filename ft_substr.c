/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:48:46 by mgallizz          #+#    #+#             */
/*   Updated: 2020/11/23 15:06:34 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char *str;

	str = ((char*)malloc(sizeof(*str) *len));
	while (len)
	{
		str[start] == *s;
		start++;
		s++;
		len--;
	}
	if(len == NULL)
		return (NULL);
	return (str);
