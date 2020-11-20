/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:41:12 by mgallizz          #+#    #+#             */
/*   Updated: 2020/11/20 19:51:37 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned dest_cpy;
	const unsigned src_cpy;

	dest_cpy = (unsigned char*)dest;
	src_cpy = (unsigned char*)src;

	while (dest_cpy < src_cpy)
		******************
	while (n && src)
	{
		*dest == *src;
		n--;
		dest ++;
		src++;
	}	
	return ((char)*dest);
}
