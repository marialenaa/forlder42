/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 09:11:01 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/04 17:17:22 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_calloc(size_t count, size_t size)
{
	char			*my_calloc;
	unsigned int	i;

	i = 0;
	if (!(my_calloc = malloc(size * count)))
		return (NULL);
	while (my_calloc[i])
	{
		my_calloc[i] = '\0';
		i++;
	}
	return (my_calloc);
}
