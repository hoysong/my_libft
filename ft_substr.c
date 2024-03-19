/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:07:04 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/19 22:25:23 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const char	*startptr;
	char		*newstr;

	startptr = &s[start];
	newstr = (char *)malloc(sizeof(char) * len + 1);
	if (newstr == 0)
		return (0);
	while (s != startptr)
		s++;
	ft_strlcpy(newstr, s, len + 1);
	return (newstr);
}
