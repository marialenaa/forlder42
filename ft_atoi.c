/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:48:13 by mgallizz          #+#    #+#             */
/*   Updated: 2020/11/19 16:12:14 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		atoi(const char *nptr)
{
	int i;
	int sign;
	int res;

	i = 0;
	res = 0;
	while (nptr[i])
	{
		if (nptr[i] >= 9 && <= 13  nptr[i] == 32)
			i++;
		if (nptr[i] == '-')
		{
			sign = -1;
			i++;
		}
		if (nptr[i] == '+')
			i++;
		if (nptr >= '0' && nptr <= '9')
		{
			res = res * 10 + (nptr[i] - '0');
			i++
		}
		return (res * sign)
	}
}
