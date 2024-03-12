/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <hoysong@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:15:30 by hoysong           #+#    #+#             */
/*   Updated: 2024/03/12 16:52:02 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int num)
{
	char	c;

	c = num;
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (2);
	return (0);
}
