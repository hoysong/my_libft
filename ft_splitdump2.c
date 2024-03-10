/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitdump2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:43:06 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/08 15:13:23 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char **make_arr(const char *s, char c, size_t *index)
{
	size_t	c_num;
	size_t	i;
	char	**new_arr;

	c_num = 1;
	i = 0;
	while (1)
	{
		if (s[i] == '\0')
			break ;
		else if (s[0] == c)
			s++;
		else if (s[i] == c)
		{
			if (i > 0)
				c_num++;
			s = &s[i];
			i = 0;
		}
		else if (s[i] != c)
			i++;
	}
	*index = 0;
	new_arr = malloc(sizeof(char *) * c_num);
	return (new_arr);
}

char **make_split(const char *s, char c, size_t *j)
{
	size_t	i;
	char	**new_arr;

	new_arr = make_arr(s, c, &i);
	while (1)
	{
		if (s[0] == c)
			s++;
		else if (s[i] == c || s[i] == '\0')
		{
			if (i > 0)
			{
				new_arr[j] = (char *)malloc(sizeof(char) * i);
				if (new_arr[j] == 0)
				{
					nul_check(new_arr)
					free(new_arr)
					return (0);
				}
				ft_strlcpy(new_arr[j++], s, i);
			}
			s = &s[i];
			i = 0;
			if (s[i] == '\0')
				break ;
		}
		else if (s[i] != c)
			i++;
	}
	return (new_arr);
}

void	free_arr(const char **splits, const char *nul_address, size_t split_count)
{

}

void	nul_check(const char **splits, size_t split_count)
{
	size_t	i;

	i = 0;
	while (i != 0)
	{
		free(i);
		i++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**splits;
	size_t	split_count;

	split_count = 0;
	splits = **make_split(s, c, &split_count);
	nul_check(splits, split_count);
	return (splits);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "  hello world! my  pen!  asdf  ff";
	char	c = ' ';
	char	**ptr;
	ptr = ft_split(str1, c);
	printf("%s %p\n", *ptr, *ptr);
	printf("%s %p\n", *(ptr + 1), *(ptr + 1));
	printf("%s %p\n", *(ptr + 2), *(ptr + 2));
	printf("%s %p\n", *(ptr + 3), *(ptr + 3));
	printf("%s %p %d\n", *(ptr + 4), *(ptr + 4), ptr + 4);
	printf("%s %p %d\n", *(ptr + 5), *(ptr + 5), ptr + 5);
	printf("%s %p %d\n", *(ptr + 6), *(ptr + 6), ptr + 6);
}
