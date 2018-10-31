/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <anrzepec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:12:29 by anrzepec          #+#    #+#             */
/*   Updated: 2018/10/31 01:38:43 by andrewrze        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define MIN_INT -2147483648
# define MAX_INT 2147483647
# include <stdio.h>
# include <errno.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void        ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

void        *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

char        *ft_strchr(char const *str, int c);

void        ft_bzero(void *s, size_t n);

char        *ft_strcat(char *restrict s1, char const *restrict s2);

char        *ft_strncat(char *restrict s1, char const *restrict s2, size_t n);

void        *ft_memset(void *b, int c, size_t len);

int         ft_strlen(char const *str);

char        *ft_strchr(char const *str, int c);

void        ft_putstr(char const *str);

void        ft_putchar(char c);

char const  *ft_strcpy(char *dst, char const *src);

char        *ft_strncpy(char *dst, char const *src, size_t len);

int         ft_atoi(char *str);

char        *strdup(char const *s1);

int         ft_isalpha(int c);

int         ft_isdigit(int c);

int         ft_isalnum(int c);

void        ft_putendl(char const *s);

void        ft_putnbr(int n);

void        ft_putchar_fd(char c, int fd);

void        ft_putstr_fd(char const *s, int fd);

void        ft_putendl_fd(char const *s, int fd);

void        ft_putnbr_fd(int n, int fd);

char        *ft_itoa(int n);

#endif
