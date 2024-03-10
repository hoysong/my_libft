/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 22:59:08 by hoysong           #+#    #+#             */
/*   Updated: 2024/02/27 23:43:46 by hoysong          ###   ########.fr       */
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

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "0123456789abcdefg";
	char	str1[] = "0123456789abcdefg";
	ft_memmove(str + 3, str, 10);
	memmove(str1 + 3, str, 10);
	printf("%s\n", str);
	printf("%s\n", str1);
}
