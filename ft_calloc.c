/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:05:09 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/02 00:15:48 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void *ft_calloc(size_t num, size_t size)
{
	unsigned char	*ptr;
	size_t	i;

	ptr = malloc(size * num);
	if (ptr == 0)
		return (0);
	i = 0;
	while (&ptr[i] != &ptr[size * num - 1])
		ptr[i++] = 0;
	return (ptr);
}

#include <stdio.h>
int	main(void)
{
	int	i = 20;
	int *num2;
	num2 = ft_calloc(5, sizeof(int));
}
