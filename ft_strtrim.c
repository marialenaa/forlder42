/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:51:40 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/03 19:05:40 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *cpy;
	int i;
	int set_len;
	int s1_len;

	i = 0;
	set_len = ft_strlen(set);
	s1_len = ft_strlen(s1);
	if (!(cpy = malloc(sizeof(char) * s1_len)))
			return (NULL);
	if (ft_strncmp(s1, set, set_len) == 0)
	{
		while ((set_len + i) <= (s1_len - set_len))
		{		
			cpy[i] = s1[set_len + i];
			i++;
		}
	}
	else
	{
		while (i++ <= (s1_len - set_len))
			cpy[i] = s1[i];
	}
	if ((ft_strncmp(&s1[s1_len - set_len], set, set_len)) == 0)
	{
		cpy[i] = '\0';
		return (cpy);
	}
	else
	{
		while (i++ < s1_len)
			cpy[i] = s1[i];
	}
	return (cpy);
}
