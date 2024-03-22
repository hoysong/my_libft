/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:30:11 by hoysong           #+#    #+#             */
/*   Updated: 2024/02/29 22:14:08 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *dest, int n_src, unsigned long len)
{
	unsigned char	*ptr;

	ptr = dest;
	while (len)
		ptr[--len] = n_src;
	return (dest);
}
