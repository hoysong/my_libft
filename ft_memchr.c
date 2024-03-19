/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:33:25 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/19 22:23:30 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	bigint;

	bigint = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (*ptr != bigint && n != 1)
	{
		ptr++;
		n--;
	}
	if (*ptr == bigint)
		return ((unsigned char *)ptr);
	return (0);
}
