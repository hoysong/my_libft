/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 22:59:08 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/20 17:20:50 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destptr;
	unsigned char	*srcptr;

	destptr = (unsigned char *)dest;
	srcptr = (unsigned char *)src;
	if (destptr == 0 && srcptr == 0)
		return (0);
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
int main(void)
{
    char str1[] = "0123456789";
    char str2[] = "0123456789";
    printf("libft  : %s\n", (char *)ft_memmove(&str1[0], &str1[5], 4));
    printf("origin : %s\n", (char *)memmove(&str2[0], &str2[5], 4));

    char str3[] = "ABCDEFGHIJKLM";
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
}

