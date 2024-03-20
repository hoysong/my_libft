/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:49:00 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/20 20:56:04 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*return_ptr;

	return_ptr = (char *)dest;
	if (dest > src)
	{
		while (n > 0)
		{
			n --;
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (return_ptr);
}
