/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 23:03:47 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/01/24 00:08:52 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_isalpha(int s);
int				ft_isdigit(int d);
int				isascii(int c);
int				ft_isprint(int c);
unsigned long	ft_strlen(char *str);
void			*memset(void *ptr, int value, unsigned long num);
void			*ft_bzero(void *ptr, unsigned long num);

#endif