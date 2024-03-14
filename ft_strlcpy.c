/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:14:51 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/13 16:03:50 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t maxlen)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (maxlen < 1)
		return (srclen);
	else if (maxlen-- > 0)
	{
		while (maxlen > 0 && *src)
		{
			*dest++ = *src++;
			maxlen--;
		}
		*dest = '\0';
	}
	return (srclen);
}
