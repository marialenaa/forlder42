/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz </var/mail/mgallizz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 18:23:28 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/01 19:25:04 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ptr1;
	unsigned char *ptr2;

	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;

	while (n--)
	{
		if(*ptr1 == *ptr2)
		{
			ptr1++;
			ptr2++;
		}
	}
	return (*ptr1 - *ptr2);
}
