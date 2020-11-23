/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:51:40 by mgallizz          #+#    #+#             */
/*   Updated: 2020/11/23 17:59:51 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned char *dest;
	unsigned int i;

	i = 0;
	while (*set && i == 0)
	{
		if(*s1 == *set)
		{
			set++;
			*ft_strtrim(*s1, *set) 
		}
		i++;
		s1++;
	}
	while (*s1)
	{
		i++;
		s1++;
	}
	while (*set)
	{
		if(str[i - 1] != *set)
			set++;
		else
		{
			i--;
			s1--;
		}

	}
	dest = (char*)malloc(sizeof(*dest) * i);
	if (!i)
		return (NULL);
	while (*s1)
	{
		*dest == *s1;
		s1++;
		dest++;
	}
	return (dest);
}
