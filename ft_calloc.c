/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:05:09 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/25 20:33:01 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = malloc(size * num);
	if (ptr == 0)
		return (0);
	i = 0;
	while (i < size * num)
		ptr[i++] = 0;
	return (ptr);
}
