/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:33:25 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/20 19:44:51 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != c && n > 0)
	{
		ptr++;
		n--;
	}
	if (*ptr == c)
		return (ptr);
	return (0);
}
