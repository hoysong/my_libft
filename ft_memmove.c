/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 22:59:08 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/12 16:32:14 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destptr;
	unsigned char	*srcptr;

	destptr = (unsigned char*)dest;
	srcptr = (unsigned char*)src;

	if (src < dest)
		while (n--)
			destptr[n] = srcptr[n];
	else
		while (n--)
			*destptr++ = *srcptr++;
	return (dest);
}
