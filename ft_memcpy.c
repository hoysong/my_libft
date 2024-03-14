/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:32:18 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/13 00:37:09 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destptr;
	unsigned char	*srcptr;

	destptr = (unsigned char *)dest;
	srcptr = (unsigned char *)src;
	if (destptr == 0 && srcptr == 0)
		return (0);
	while (n--)
		*destptr++ = *srcptr++;
	return (dest);
}
