/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:30:39 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/06 23:26:01 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char **make_arr(char const *s, char c, size_t *index, size_t *jindex)
{
	size_t	i;
	size_t	splits;
	char	**newarr;

	splits = 0;
	i = 0;
	*jindex = 0;
	*index = 0;
	while (s[i])
	{
		if (s[i] == c)
			splits++;
		i++;
	}
	splits += 1;
	newarr = malloc(sizeof(char *) * (splits + 1));
	return (newarr);
}

char **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**splits;
	char	*copystr;
	int	end;

	copystr = (char *)s;
	splits = make_arr(s, c, &i, &end);
	while (1)
	{
		if (copystr[i] != c)
			i++;
		else if (copystr[i] == c || copystr[i] == '\0')
		{
			if (copystr[i] == '\0')
				end = 1;
			copystr[i] = '\0';
			splits[j] = (char *)malloc(ft_strlen(copystr) + 1);
			if (*splits == 0)
				return (0);
			ft_strlcpy(splits[j++], copystr, ft_strlen(copystr) + 1);
			copystr = &copystr[i + 1];
			i = 0;
		}
	}
	return (splits);
}

#include <stdio.h>
int	main(void)
{
	char	str1[] = "hello world! my pen";
	char	split = ' ';
	char	**ptr;
	ptr = ft_split(str1, split);
	printf("%s\n", *ptr++);
	printf("%s\n", *ptr++);
	printf("%s\n", *ptr++);
	printf("%s\n", *ptr);
}
