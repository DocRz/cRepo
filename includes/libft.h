/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <anrzepec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:12:29 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/08 20:59:50 by anrzepec         ###   ########.fr       */
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

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memchr(void const *s, int c, size_t n);

void				*ft_memcpy(void *dst, const void *src, size_t n);

void				*ft_memccpy(void *dst, const void *src, int c, size_t n);

char				*ft_strchr(char const *str, int c);

char				*ft_strrchr(char const *str, int c);

void				ft_bzero(void *s, size_t n);

char				*ft_strcat(char *s1, char const *s2);

char				*ft_strncat(char *s1, char const *s2, size_t n);

void				*ft_memset(void *b, int c, size_t len);

int					ft_strlen(char const *str);

char				*ft_strchr(char const *str, int c);

void				ft_putstr(char const *str);

void				*ft_memmove(void *dst, void const *src, size_t len);

int					ft_memcmp(void const *s1, void const *s2, size_t n);

size_t				ft_strlcat(char *dst, char const *src, size_t size);

char				*ft_strstr(char const *haystack, char const *needle);

char				*ft_strnstr(char const *h, char const *n, size_t len);

void				ft_putchar(char c);

char const			*ft_strcpy(char *dst, char const *src);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strsub(char const *s, unsigned int start, size_t len);

int					ft_strnequ(char const *s1, char const *s2, size_t n);

int					ft_strequ(char const *s1, char const *s2);

int					ft_strcmp(char const *s1, char const *s2);

int					ft_strncmp(char const *s1, char const *s2, size_t n);

char				*ft_strmap(char const *s1, char(*f)(char));

void				ft_striteri(char *s, void (*f)(unsigned int, char *));

void				ft_striter(char *s, void (*f)(char *));

void				ft_strclr(char *s);

void				ft_strdel(char **as);

char				*ft_strnew(size_t size);

void				ft_memdel(void **ap);

void				*ft_memalloc(size_t size);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char				*ft_strncpy(char *dst, char const *src, size_t len);

int					ft_atoi(char *str);

char				*ft_strdup(char const *s1);

int					ft_isalpha(int c);

int					ft_isdigit(int c);

int					ft_isalnum(int c);

int					ft_isascii(int c);

int					ft_isprint(int c);

int					ft_toupper(int c);

int					ft_tolower(int c);

void				ft_putendl(char const *s);

void				ft_putnbr(int n);

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char const *s, int fd);

void				ft_putendl_fd(char const *s, int fd);

void				ft_putnbr_fd(int n, int fd);

char				*ft_itoa(int n);

char				**ft_strsplit(char const *s, char c);

char				*ft_strtrim(char const *s);

#endif
