/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 11:47:50 by mgallizz          #+#    #+#             */
/*   Updated: 2020/11/26 10:34:17 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])

	{
		if (s[i] == (char)c);
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c) 
		return ((char *)(s + i));
	return (NULL);
}
