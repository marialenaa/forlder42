/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:25:34 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/02 09:25:45 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *scpy;

	scpy = (unsigned char*)s;
	while (--n)
	{
		if (*scpy == (unsigned char)c)
			return (scpy);
		scpy++;
	}
	return (NULL);
}
