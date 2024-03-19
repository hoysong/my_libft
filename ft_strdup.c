/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 00:16:30 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/19 22:24:17 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*newstr;

	slen = ft_strlen(s);
	newstr = (char *)malloc(sizeof(const char) * slen + 1);
	if (newstr == 0)
		return (0);
	ft_strlcpy(newstr, s, slen + 1);
	return (newstr);
}
