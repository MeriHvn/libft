/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <mhovhan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:12:45 by merihovhann       #+#    #+#             */
/*   Updated: 2024/11/19 17:57:12 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*src_ptr;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	dst = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	if (dst > src_ptr)
		while (n-- > 0)
			dst[n] = src_ptr[n];
	else
	{
		i = 0;
		while (i < n)
		{
			dst[i] = src_ptr[i];
			i++;
		}
	}
	return (dest);
}
