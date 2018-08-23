/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 18:36:35 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/07 04:06:33 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int c;
	int neg;
	int toi;

	toi = 0;
	c = 0;
	neg = 0;
	while (str[c] == ' ' || str[c] == '\t' || str[c] == '\n' ||
			str[c] == '\v' || str[c] == '\f' || str[c] == '\r')
		c++;
	if (str[c] == '-')
		neg = 1;
	if (str[c] == '-' || str[c] == '+')
		c++;
	while (str[c] >= '0' && str[c] <= '9')
	{
		toi = toi * 10;
		toi = toi + (str[c] - '0');
		c++;
	}
	if (neg)
		toi = toi * (-1);
	return (toi);
}
