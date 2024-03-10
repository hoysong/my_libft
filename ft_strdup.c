/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 00:16:30 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/02 16:21:24 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*newstr;

	slen = ft_strlen(s);
	newstr = (char *)malloc(sizeof(const char) * slen);
	ft_strlcpy(newstr, s, slen);
	return (newstr);
}
