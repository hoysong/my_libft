/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 02:07:22 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/18 03:27:06 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	insert(char *numstr, int *i, long int longnum)
{
	while (longnum > 0)
	{
		numstr[(*i)--] = longnum % 10 + '0';
		longnum = longnum / 10;
	}
}

char	*ft_itoa(int n)
{
	int			i;
	char		sign;
	char		*newstr;
	char		numstr[12];
	long int	longnum;

	i = 10;
	sign = '\0';
	longnum = n;
	if (n < 0)
	{
		sign = '-';
		longnum *= -1;
	}
	numstr[11] = '\0';
	if (n == 0)
		numstr[i--] = '0';
	else
		insert(numstr, &i, longnum);
	numstr[i] = sign;
	if (numstr[i] == '\0')
		i++;
	newstr = ft_strdup(&numstr[i]);
	return (newstr);
}
