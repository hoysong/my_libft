/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:40:30 by hoysong           #+#    #+#             */
/*   Updated: 2024/02/26 15:48:48 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int num)
{
	if (num >= 32 && num <= 126)
		return (1);
	return (0);
}

#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int	i;
	
	i = 0;
	while (i != 126)
	{
		printf("%d ", ft_isprint(i));
		printf("%d ", isprint(i));
		printf("%c\n", i);
		printf("=====\n");
		i++;
	}
}
