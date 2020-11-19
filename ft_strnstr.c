/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:04:56 by mgallizz          #+#    #+#             */
/*   Updated: 2020/11/19 15:32:54 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;

	i = 0;
	save = 0;
	while (*big && *little && *big != *little)
	{
		big++;
		i++;
		if (i >= (len - 1)
				return (NULL);
	}
	if (*big == *little && *big != '\0')
	{
		while (*big == *little)
		{
	 		if(i >= len - 1)
				return ((char*)(big + i));
			big++;
			little++;
			i++;
		}
	}
	if (i >= len - 1 || *little == '\0')
		return ((char*)(big + i));
	return (NULL);
}
