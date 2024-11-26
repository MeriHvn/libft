/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <mhovhan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:57:05 by merihovhann       #+#    #+#             */
/*   Updated: 2024/11/22 18:42:47 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*allocate_word(char const *s, char c, int *index)
{
	char	*word;
	int		start;
	int		len;

	start = *index;
	len = 0;
	while (s[start] == c)
		start++;
	while (s[start + len] && s[start + len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	*index = start + len;
	ft_strlcpy(word, &s[start], len + 1);
	return (word);
}

void	ft_free(int i, char **result)
{
	while (i-- > 0)
		free(result[i]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		index;
	int		words;
	char	**result;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	index = 0;
	while (i < words)
	{
		result[i] = allocate_word(s, c, &index);
		if (!result[i])
		{
			ft_free(i, result);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
