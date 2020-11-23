/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:12:39 by mgallizz          #+#    #+#             */
/*   Updated: 2020/11/23 15:37:32 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char *dest;
	unsigned int is1;
	unsigned int is2;
	unsigned int i;

	is1 = 0;
	is2 = 0;
	i = 0;
	while (*s1)
		is1++;
	while (is2)
		is2++;
	dest = malloc(sizeof((*dest) * (is1 + is2)));
	if (is1 == NULL || is2 == NULL)
		return (NULL);
	while (*s1)
	{
		*dest == s1;
		s1++;
		dest++;
	}
	while (*s2)
	{
		*dest == *s2;
		s2++;
		dest++;
	}
	return (dest);
}	
