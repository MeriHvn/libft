/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <mhovhan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:08:11 by merihovhann       #+#    #+#             */
/*   Updated: 2024/11/19 15:29:03 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	const char		*res;

	ch = (unsigned char)c;
	res = 0;
	while (*s != '\0')
	{
		if (*s == ch)
			res = s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return ((char *)res);
}
