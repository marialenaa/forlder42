/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:12:39 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/04 23:49:24 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *dest;
	int is1;
	int is2;
	int i;
	int j;

	is1 = 0;
	is2 = 0;
	i = 0;
	j = 0;

	if (s1 && s2)
	{
		while (s1[is1])
			is1++;
		while (s2[is2])
			is2++;
		if (!(dest = malloc(sizeof(char) * (is1 + is2))))
			return (NULL);
		while (s1[i])
		{
			dest[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			dest[i + j] = s2[j];
			j++;
		}
		dest[i +j] = '\0';
		return (dest);
	}
	return (NULL);
}	
