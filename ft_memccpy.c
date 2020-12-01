/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 18:44:28 by mgallizz          #+#    #+#             */
/*   Updated: 2020/11/30 19:02:20 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	 *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char unch;
	unsigned char *destcpy;

	destcpy = (unsigned char *)dest;
	unch = (unsigned char)c;

	if (!(dest || src || unch))
		return (NULL);
	while (n)
	{
		*destcpy = *(unsigned char *)src;
		if (*(unsigned char *)src == unch)
			return (destcpy);
		n--;
		src++;
		destcpy++;
	}
	return (NULL);
}
