/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:28:12 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/02 20:38:25 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*newstr;
	char	*start_ptr;

	total_len = ft_strlen((const char *)s1) + ft_strlen((const char *)s2);
	newstr = (char *)malloc(sizeof(char) * total_len);
	if (newstr == 0)
		return (0);
	start_ptr = newstr;
	ft_strlcpy(newstr, (const char *)s1, ft_strlen((const char *)s1));
	ft_strlcat(newstr, (const char *)s2, total_len + 1);
	return (newstr);
}
