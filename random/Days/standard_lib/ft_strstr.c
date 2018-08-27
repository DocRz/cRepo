/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 02:09:11 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/14 20:10:56 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_strstr(char *str, char *to_find)
{
	int length;
	int c;

	if (!ft_strlen(to_find))
		return (str);
	c = 0;
	while (str[c])
	{
		length = 0;
		while (str[c + length] == to_find[length])
			length++;
		if (!to_find[length])
			return (&str[c]);
		c++;
	}
	return (0);
}

