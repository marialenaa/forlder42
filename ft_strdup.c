/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:29:01 by mgallizz          #+#    #+#             */
/*   Updated: 2020/11/23 11:39:03 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_strdup(const char *s)
{
	char *str;
	int i;

	str = NULL;
	i = 0;
	str = (char*)malloc(sizeof(*str) * strlen(*s))
	while (str[i])
	{
		str[i] = s[i]
			i++;
	}
	return (str);
}
