/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:25:34 by mgallizz          #+#    #+#             */
/*   Updated: 2020/11/23 19:07:17 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n)
	{
		if((unsigned char)s == (unsigned char)c)
			return ((unsigned char*)s);
		s++;
		n--;
	}
	return (NULL);
}
