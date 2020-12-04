/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:04:56 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/04 16:24:01 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t sub;

	i = 0;
	if (ft_strlen(little) == 0 || !len)
		return ((char*)big);
	while (i < len--)
	{
		sub = 0;
		while (big[i + sub] == little[sub])
		{
			sub++;
			if (little[sub] == '\0')
				return ((char*)big + i); 
		}
		i++;
	}
	return (NULL);
}
