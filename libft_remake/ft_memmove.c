/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:49:00 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/20 17:34:00 by hoysong          ###   ########.fr       */
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

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[] = "0123456789";
	char padding1 = '\0';
	char padding2 = '\0';
	char padding3 = '\0';
	char str2[] = "0123456789";
	printf("libft  : %s\n", (char *)ft_memmove(&str1[0], &str1[5], 4));
	printf("origin : %s\n", (char *)memmove(&str2[0], &str2[5], 4));

	char str3[] = "ABCDEFGHIJKLM";
	char padding4 = '\0';
	char padding5 = '\0';
	char padding6 = '\0';
	char str4[] = "ABCDEFGHIJKLM";
	printf("libft  : %s\n", (char *)ft_memmove(&str3[0], &str3[5], 4));
	printf("origin : %s\n", (char *)memmove(&str4[0], &str4[5], 4));

	// dest > src
	char str5[] = "!@#$%^&*():?";
	char str6[] = "!@#$%^&*():?";
	printf("libft  : %s\n", (char *)ft_memmove(&str5[2], &str5[0], 6));
	printf("origin : %s\n", (char *)memmove(&str6[2], &str6[0], 6));

	// dest > src
	char str7[] = "ABCDEFGHIJKLMNOP";
	char str8[] = "ABCDEFGHIJKLMNOP";
	
	printf("         ABCDEFGHIJKLMNOP\n");
	printf("libft  : %s\n", (char *)ft_memmove(&str7[3], &str7[0], 4));
	printf("origin : %s\n", (char *)memmove(&str8[3], &str8[0], 4));

	char str9[] = "12345";
	char str10[] = "12345";
	
	printf("         12345\n");
	//printf("libft  : %s\n", (char *)ft_memmove(&str9[3], &str9[0], 4));
	printf("origin : %s\n", (char *)memmove(&str10[3], &str10[0], 4));
}
