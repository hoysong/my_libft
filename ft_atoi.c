/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:21:21 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/01 20:46:51 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	intnum;
	int	norp;

	intnum = 0;
	if (*nptr == '-')
		norp = -1;
	else if (*nptr == '+')
		norp = 1;
	nptr++;
	while (*nptr && *nptr >= '0' && *nptr <= '9')
		intnum = intnum * 10 + *(char *)nptr++ - '0';
	intnum *= norp;
	return (intnum);
}
