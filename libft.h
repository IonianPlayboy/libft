/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:54:36 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/08 18:50:39 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
** Header includes
*/
# include <stdlib.h>
# include <unistd.h>

/*
** Part 1 : libc functions
*/
void		*ft_memset(void *s, int c, unsigned int len);
void		ft_bzero(void * s, unsigned int n);
unsigned int	ft_strlen(char const *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(char const *s, int c);
char			*ft_strrchr(char const *s, int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strnstr(char const *s1, char const *s2, unsigned int len);
int				ft_atoi(const char *str);
void			*ft_calloc(unsigned int nb, unsigned int size);
char			*ft_strdup(char *src);

/*
** Part 2 : additional functions
*/
char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int nbr);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif
