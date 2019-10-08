/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:54:36 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/08 13:26:31 by alabreui         ###   ########.fr       */
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
unsigned int	ft_strlen(char const *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_atoi(const char *str);
char			*ft_strdup(char *src);

/*
** Part 2 : additional functions
*/
char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_split(char *str);
char			*ft_itoa(int nbr);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif
