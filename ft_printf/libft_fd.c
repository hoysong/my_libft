/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_fd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:17:42 by hoysong           #+#    #+#             */
/*   Updated: 2024/04/01 08:26:16 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_putstr_fd(const char *s, int fd)
{
	const char	*start;
	int			s_len;

	start = s;
	while (*s++)
		;
	s_len = --s - start;
	write(fd, start, s_len);
	return (s_len);
}

int	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
