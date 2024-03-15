/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 02:48:30 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/15 17:43:58 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

#include <stdio.h>

char	*convert_to_char(int src)
{
	char	numstr[12];
	int	i;
	i = 11;
	while (src > 0)
	{
		numstr[i] = src % 10 + '0';
		src /= 10;
		i--;
	}
	numstr[i] = '\0';
	i++;
	return (&numstr[i]);
}

char	*ft_itoa(int src)
{
	char	*numstr;
	int	sign;
	sign = 1;
	if (src < 0)
	{
		src *= -1;
		sign = -1;
	}
	numstr = convert_to_char(src);
}

int	main(void)
{
	ft_itoa(-1234);
}
