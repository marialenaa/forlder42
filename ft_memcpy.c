/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 11:59:56 by mgallizz          #+#    #+#             */
/*   Updated: 2020/11/20 18:41:40 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	dst_cpy = (char *)dst;
	src_cpy = (char *)src;
	if(!dst || !src)
		return (NULL);
	while (n)
	{
		*dst_cpy = *src_src;
		n--;
	}
	return (dst);
}
