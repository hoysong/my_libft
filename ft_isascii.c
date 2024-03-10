/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:50:59 by hoysong           #+#    #+#             */
/*   Updated: 2024/02/26 14:58:20 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int num)
{
	char	c;

	c = num;
	if (c >= 0 && c <= 127)
		return (1);
	return(0);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	i;
	i = 0;
	while (i != 127)
	{
		printf("%d ", ft_isascii(i));
		printf("%d ", isascii(i));
		printf("%c\n", i);
		printf("=====\n");
		i++;
	}
}
