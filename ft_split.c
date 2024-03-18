/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 05:23:10 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/18 19:33:35 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**make_arr(char const *s, char c, int *words)
{
	int		count_alpha;
	char	**arr;

	count_alpha = 0;
	while (1)
	{
		if (*s != c && *s != '\0')
			count_alpha++;
		else if (*s == c || *s == '\0')
		{
			if (count_alpha > 0)
			{
				(*words)++;
				count_alpha = 0;
			}
		}
		if (!*s++)
			break ;
	}
	arr = malloc(sizeof(char *) * (*words + 1));
	if (arr == 0)
		return (0);
	return (arr);
}

static void	insert_digit(char const *s, char c, char **splits_arr, int *index)
{
	int	i;

	i = 0;
	while (1)
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (i > 0)
			{
				splits_arr[*index] = malloc(sizeof(char) * (i + 1));
				if (splits_arr[*index] == NULL)
					return ;
				ft_strlcpy(splits_arr[(*index)++], s, i + 1);
				s = &s[i];
				i = 0;
			}
			if (s[i] == '\0')
				break ;
			s++;
		}
		else if (s[i] != c)
			i++;
	}
	splits_arr[*index] = NULL;
}

static void	ft_free(char **splits, int *index)
{
	if (*index != 0)
		(*index)--;
	while (1)
	{
		if (*index == 0)
			break ;
		free(splits[*index]);
		(*index)--;
	}
	free(splits);
}

char	**ft_split(char const *s, char c)
{
	int		split_count;
	int		index;
	char	**splits;

	split_count = 0;
	index = 0;
	splits = make_arr(s, c, &split_count);
	insert_digit(s, c, splits, &index);
	if (split_count != index)
		ft_free(splits, &index);
	return (splits);
}
