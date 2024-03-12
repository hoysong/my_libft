/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 22:44:57 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/12 17:00:11 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static char	*find_front(const char *s1, const char *set)
{
	size_t	i;

	while (*s1)
	{
		i = 0;
		while (*s1 != set[i] && set[i])
			i++;
		if (set[i] == '\0')
			break ;
		else if (set[i] == *s1)
			s1++;
	}
	return ((char *)s1);
}

static void	find_end(const char *set, char *start_ptr, char *end_ptr)
{
	size_t	i;

	while (start_ptr != end_ptr)
	{
		i = 0;
		while (set[i] != *end_ptr && set[i])
			i++;
		if (set[i] == '\0')
			break ;
		else if (set[i] == *end_ptr)
			*end_ptr = '\0';
		end_ptr--;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start_ptr;
	char	*end_ptr;
	char	*new_str;

	start_ptr = (char *)s1;
	end_ptr = (char *)s1;
	if (*s1 == '\0')
		return (NULL);
	while (*end_ptr)
		end_ptr++;
	end_ptr--;
	start_ptr = find_front(s1, set);
	find_end(set, start_ptr, end_ptr);
	new_str = malloc(sizeof(char) * (ft_strlen(start_ptr) + 1));
	ft_strlcpy(new_str, start_ptr, ft_strlen(start_ptr));
	return (new_str);
}
