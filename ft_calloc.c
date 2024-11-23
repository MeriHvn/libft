/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <mhovhan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:29:19 by merihovhann       #+#    #+#             */
/*   Updated: 2024/11/19 18:42:20 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	m;

	m = (count * size);
	if ((count == 0 && size == 0) && ((m < count) || (m < size)))
		return (NULL);
	ptr = malloc(m);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, m);
	return (ptr);
}
