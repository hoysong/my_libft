/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:52:43 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/16 20:43:11 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			numstr[12];
	int				i;
	char			sign;

	i = 10;
	sign = '\0';
	if (n < 0)
	{
		n *= -1;
		sign = '-';
	}
	numstr[11] = '\0';
	if (n == 0)
		numstr[i--] = '0';
	else
		while ((unsigned int)n > 0)
		{
			numstr[i--] = (unsigned int)n % 10 + '0';
			n = (unsigned int)n / 10;
		}
	numstr[i] = sign;
	if (numstr[i] == '\0')
		i++;
	write(fd, &numstr[i], ft_strlen(&numstr[i]));
}
