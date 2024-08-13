/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 08:30:46 by hoysong           #+#    #+#             */
/*   Updated: 2024/04/04 14:22:40 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(const char *s, int fd);
int		ft_printf(const char *args, ...);
int		nbrbase(unsigned long long big_nbr, char *base);
int		sign_nbr_base(long long big_nbr, char *base);

#endif
