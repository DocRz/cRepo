/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 19:53:02 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/07 20:10:25 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   ft_strcpy(dest, "Heloooo");
   printf("Before memcpy dest = %s\n", dest);
   ft_memccpy(dest, src, '.', strlen(src) + 1);
   printf("After memccpy dest = %s\n", dest);
   
   return(0);
}
