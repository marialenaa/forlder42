/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 18:44:28 by mgallizz          #+#    #+#             */
/*   Updated: 2020/11/20 18:57:39 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (src && n)
	{
		*dst = *src;
		n--;
		dst++;
		src++;
		if (src == c)
		{
			src++;
			return ((int)*src);
		}

	}	
	return (NULL);
}
