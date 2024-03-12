/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 02:48:30 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/12 16:32:01 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static int	str_reverse(char *s1)
{
	char	*start;
	char	bucket[11];
	int		i;

	i = 0;
	start = s1;
	while (*s1)
		s1++;
	while (s1 != start)
	{
		s1--;
		bucket[i] = *s1;
		i++;
	}
	i = 0;
	while (bucket[i])
	{
		*s1 = bucket[i];
		s1++;
		i++;
	}
	return (i);
}

static int	str_insert(char *dest, long long num)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	if (num < 0)
	{
		sign = -1;
		num *= -1;
	}
	if (num == 0)
	{
		*dest++ = '0';
		*dest = '\0';
		return (sign);
	}
	while (num > 0)
	{
		dest[i] = num % 10 + '0';
		num /= 10;
		i++;
	}
	dest[i] = '\0';
	return (sign);
}

char	*ft_itoa(int n)
{
	char	*newstr;
	char	numstr[11];
	int		numstrlen;
	int		sign;

	sign = str_insert(numstr, (long long)n);
	numstrlen = str_reverse(numstr);
	newstr = (char *)malloc(sizeof(char) + numstrlen + sign);
	if (newstr == 0)
		return (0);
	if (sign < 0)
	{
		*newstr = '-';
		newstr++;
	}
	ft_strlcpy(newstr, numstr, ft_strlen(numstr));
	if (sign < 0)
		newstr--;
	return (newstr);
}
