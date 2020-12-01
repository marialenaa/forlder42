/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:04:32 by mgallizz          #+#    #+#             */
/*   Updated: 2020/11/26 17:20:58 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = ;
	while (dst[i] && src[j] && (size - 1))
	{
		while (dst[i] && (size - 1))
			i++;
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] == '\0';
	return (i);
}	
