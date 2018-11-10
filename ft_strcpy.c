/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:06:39 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/06 15:06:51 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strcpy(char *dst, const char *src)
{
	int c;

	c = -1;
	while (src[++c])
		dst[c] = src[c];
	dst[c] = '\0';
	return (dst);
}
