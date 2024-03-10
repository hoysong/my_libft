/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freetest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:38:04 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/10 21:37:13 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_free(char **splits, int *index)
{
	if (*index != 0)
		(*index)--;
	while (1)
	{
		free(splits[*index]);
		if (*index == 0)
			break ;
		(*index)--;
	}
}

int	main(void)
{
	char	**arr2;
	char	*ptr0;
	char	*ptr1;
	int	i = 2;
	arr2 = malloc(sizeof(char *) * 4);
	arr2[0] = malloc(sizeof(char) * (ft_strlen("hello world!") + 1));
	ft_strlcpy(arr2[0], "hello world!", ft_strlen("hello world!"));

	arr2[1] = malloc(sizeof(char) * ft_strlen("world!") + 1);
	ft_strlcpy(arr2[1], "world!", ft_strlen("world!"));

	printf("%s %p\n", arr2[0], arr2[0]);
	printf("%s %p\n", arr2[1], arr2[1]);
	printf("%s %p\n", arr2[2], arr2[2]);
	printf("%s %p\n", arr2[3], arr2[3]);
	ft_free(arr2, &i);
	printf("%s %p\n", arr2[0], arr2[0]);
	printf("%s %p\n", arr2[1], arr2[1]);
	printf("%s %p\n", arr2[2], arr2[2]);
	printf("%s %p\n", arr2[3], arr2[3]);
}
