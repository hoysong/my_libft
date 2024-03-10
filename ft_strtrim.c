/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 22:44:57 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/08 00:52:09 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *find_front(const char *s1, const char *set)
{
	char	*ptr;
	size_t	i;

	while (*s1)
	{
		i = 0;
		while (*s1 != set[i] && set[i])
			i++;
		if (set[i] == '\0')
			break ;
		else if (set[i] == *s1)
		{
			ptr = (char *)s1;
			ptr++;
		}
		s1++;
	}
	return (ptr);
}

void	*find_end(char *s1, const char *set, char *start_ptr, char *end_ptr)
{
	char	*ptr;
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
	return (ptr);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *start_ptr;
	char *end_ptr;
	size_t	i;

	start_ptr = (char *)s1;
	end_ptr = (char *)s1;

	if (*s1 == '\0')
		return (NULL);
	while (*end_ptr)
		end_ptr++;
	end_ptr--;
	start_ptr = find_front(s1, set);
	find_end((char *)s1, set, start_ptr, end_ptr);

	return (start_ptr);
}

#include <stdio.h>
int	main(void)
{
	char str1[] = "hello the parrot!";
	char str2[] = "heo!t";
	char *ptr;
	ptr = ft_strtrim(str1, str2);
	printf("%s\n", ptr);
}
