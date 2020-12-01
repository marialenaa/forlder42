/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 11:59:56 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/01 17:56:56 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*srccpy;
	char		*destcpy;

	srccpy = (const char*)src;
	destcpy = (char *)dest;
	if (!(dest || src || n))
		return (NULL);
	while (n--)
	{
		*destcpy = *srccpy;
		destcpy++;
		srccpy++;
	}
	return ((char *)dest);
}
