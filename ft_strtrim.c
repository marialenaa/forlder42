/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:51:40 by mgallizz          #+#    #+#             */
/*   Updated: 2020/11/25 11:13:19 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strcpm(char c1, char c2)
{
		if (c1 == c2)
			return (1);
		return (0);
}

int		ft_strlen(char *s1)
{
	int i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *dest;
	int i;
	int set_len;
	int s1_len;

	i = 0;
	set_len = ft_strlen(*set);
	while (*set)
	{
		if (ft_strcpm(*s1, *set))
		{
			s1++;
			set++;
			*ft_strtrim(*s1, *set);
		}
		else
			i++;
	}
	s1_len = (ft_strlen(*s1) - 1);
	while (++i < (s1_len - set_len))
		s1++;
	while (*set)
	{
		if(ft_strcpm(*s1, *set))
			set++;
		else
			s1++;
	}

	dest = malloc(sizeof(char *) * *s1);
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
