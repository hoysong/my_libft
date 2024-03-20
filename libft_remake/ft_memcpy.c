/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:36:55 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/20 20:54:43 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*return_ptr;

	return_ptr = (char *)dest;
	while (n > 0)
	{
		*(char *)dest++ = *(char *)src++;
		n--;
	}
	return (return_ptr);
}
