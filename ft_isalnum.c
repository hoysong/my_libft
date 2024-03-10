/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:34:09 by hoysong           #+#    #+#             */
/*   Updated: 2024/02/26 14:43:12 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int num)
{
	char	c;

	c = num;
	if ((c >= 'a' && c <= 'z') \
			|| (c >= 'A' && c <= 'Z') \
			|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", isalnum('a'));

	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", isalnum('1'));

	printf("%d\n", ft_isalnum('\0'));
	printf("%d\n", isalnum('\0'));

	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", isalnum(' '));
}
