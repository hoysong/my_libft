/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 23:30:53 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/20 18:50:57 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_test(unsigned int i, char c)
{
	
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	s_len;
	char	*newstr;

	s_len = ft_strlen(s);
	newstr = (char *)malloc(sizeof(char) * (s_len + 1));
	if (newstr == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

int	main(void)
{
	char	str1[] = "hello wordl!";
	ft_strmapi(str1, ft_test);
}
