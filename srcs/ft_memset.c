/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:54:16 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/07 18:28:48 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*tmp;
	char	x;

	if (b == NULL)
		return (NULL);
	tmp = b;
	x = (unsigned char)c;
	while (len-- && tmp)
		*tmp++ = x;
	return (b);
}
