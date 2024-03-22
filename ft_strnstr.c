/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 21:57:30 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/22 11:57:09 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*biglen;
	char		*bigptr;
	size_t		i;

	if (len == 0)
		return ((char *)big);
	if (*little == '\0')
		return ((char *)big);
	biglen = &big[len];
	while (*big && big != biglen)
	{
		i = 0;
		bigptr = (char *)big;
		while (little[i] == big[i] && &big[i] != biglen)
		{
			i++;
			if (little[i] == '\0')
				return (bigptr);
		}
		big++;
	}
	return (0);
}
