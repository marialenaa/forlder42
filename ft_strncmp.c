/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:11:49 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/03 17:57:49 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 1;

	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] == s2[i])
			i++;
	}
	return (s1[i] - s2[i]);
}
