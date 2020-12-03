/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:04:56 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/03 15:21:19 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t sub;

	i = 0;
	if (!little)
		return ((char*)big);
	while (big[i] && i < len)
	{
		sub = 0;
		if (big[i] == little[sub])
		{
			while (big[i + sub] == little[sub])
			{
				sub++;
				if (!little[sub])
					return ((char*)big + i);
			}
		}
		i++;
	}
	return (NULL);
}
