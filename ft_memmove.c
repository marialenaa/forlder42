/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:41:12 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/01 18:43:17 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest || !src || !n)
		return (0);
	if (dest > src)
	{
		while (--n)
			((char *)dest)[n] = ((char *)src)[n];
	return (dest);
	}
	return ((char *)ft_memcpy(dest, src, !n));
}
