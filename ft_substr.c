/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:07:04 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/20 08:18:50 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// start가 len을 벗어나면??
// len만큼 null을 채움.
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
