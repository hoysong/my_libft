/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:30:36 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/13 12:25:41 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	while (*s)
	{
		s++;
	}
	while (s != ptr && *s != (char)c)
		s--;
	if (*s != c)
		return (0);
	return ((char *)s);
}
