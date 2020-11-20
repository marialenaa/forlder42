/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 11:51:28 by mgallizz          #+#    #+#             */
/*   Updated: 2020/11/20 17:13:29 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while(i < len)
	{
		b[i] = c;
		i++;
	}
	return ((unsigned char *)b);
}
