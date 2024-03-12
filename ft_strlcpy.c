/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:14:51 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/12 16:58:27 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t maxlen)
{
	unsigned long	srclen;

	srclen = ft_strlen(src);
	if (srclen > maxlen)
		while (maxlen--)
			*dest++ = *src++;
	else
	{
		while (*src)
			*dest++ = *src++;
	}
	*dest = '\0';
	return (srclen);
}
