/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:52:13 by atome-ma          #+#    #+#             */
/*   Updated: 2022/10/10 20:05:57 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(const char *str, char delim);
char	**ft_split(char const *s, char c);
void	**ft_free_mem(char **str, size_t pos);
char	**ft_fill(const char *s, char **split, char c);

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	words;

	if (!s)
		return (0);
	words = ft_count_words(s, c);
	split = (char **) ft_calloc(sizeof(char *), (words + 1));
	if (!split)
		return (0);
	return (ft_fill(s, split, c));
}

/* counts words with the delimiter 'delim' in the strings */
size_t	ft_count_words(const char *str, char delim)
{
	unsigned int	words;
	unsigned int	flag;

	words = 0;
	flag = 0;
	while (*str)
	{
		if (*str != delim && flag == 0)
		{
			flag = 1;
			++words;
		}
		else if (*str == delim)
			flag = 0;
		str++;
	}
	return (words);
}

/* fill the array with num words of rows and  */
char	**ft_fill(char const *s, char **split, char c)
{
	size_t	start;
	size_t	idx;
	int		row;

	idx = 0;
	start = 0;
	row = 0;
	while (s[idx])
	{
		if (s[idx] == c)
		{
			while (s[idx] && s[idx] == c)
				idx++;
			split[row] = ft_substr(s, start, (idx - start - 1));
			if (split == 0)
				ft_free_mem(split, row);
				row++;
		}
		if (s[idx] != c)
		{
			start = idx;
			while (s[idx] && s[idx] != c)
				idx++;
		}
	}
	return (split);
}

void	**ft_free_mem(char **str, size_t pos)
{
	size_t	i;

	i = 0;
	while (i >= 0)
	{
		free(str[i]);
	}
	free(str[pos]);
	return (0);
}

int	main(void)
{
	const char	*str = "Hellos my friend whats eeeever never";
	char 	delim = 'e';

	
	write (1, &str, 15);
	return (0);
}
