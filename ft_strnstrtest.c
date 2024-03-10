/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstrtest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:40:24 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/01 14:42:29 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	main(void)
{
	char	str1[] = "hello the world!";
	char	str2[] = "the";
	strnstr(str1, str2, sizeof(str1) - 1);
}
