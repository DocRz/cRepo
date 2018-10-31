/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrewrzepecki <anrzepec@student.42.f      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 17:49:50 by andrewrze         #+#    #+#             */
/*   Updated: 2018/10/31 01:36:14 by andrewrze        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main(void)
{
    ft_putendl(ft_itoa(-43431995));
    ft_putendl(ft_itoa(19434395));   
    ft_putendl_fd(ft_itoa(MAX_INT), 2);
    ft_putendl_fd(ft_itoa(MIN_INT), 1);
    return (0);
}
