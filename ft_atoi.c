/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:21:21 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/20 21:34:10 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	const *ft_skip_sign(const char *s, int *sign)
{
	if (*s == '-')
	{
		*sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	return (s);
}
static char const	*ft_skip_space(const char *s)
{
	while ((9 <= *s && *s <= 13) || *s == ' ')
		s++;
	return (s);
}

int	ft_atoi(const char *nptr)
{
	int	intnum;
	int	sign;

	sign = 1;
	intnum = 0;
	nptr = ft_skip_space(nptr);
	nptr = ft_skip_sign(nptr, &sign);
	while (*nptr && *nptr >= '0' && *nptr <= '9')
		intnum = intnum * 10 + *(char *)nptr++ - '0';
	intnum *= sign;
	return (intnum);
}
