/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 23:19:23 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/06 23:50:33 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int c;

	c = 0;
	if (str[c] >= 'a' && str[c] <= 'z')
		str[c] -= 32;
	c++;
	while (str[c])
	{
		if (str[c - 1] < '0' || (str[c - 1] > '9' && str[c - 1] < 'A') ||
				(str[c - 1] > 'Z' && str[c - 1] < 'a') || str[c - 1] > 'z')
		{
			if (str[c] >= 'a' && str[c] <= 'z')
				str[c] -= 32;
		}
		else
		{
			if (str[c] >= 'A' && str[c] <= 'Z')
				str[c] += 32;
		}
		c++;
	}
	return (str);
}
