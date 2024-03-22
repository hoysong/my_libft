/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:05:09 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/22 17:59:52 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	size_t			total_size;

	total_size = size * num;
	if ((size != 0 || num != 0) && (total_size / size != num))
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == 0)
		return (0);
	i = 0;
	while (i < total_size)
		ptr[i++] = 0;
	return (ptr);
}
