/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:52:13 by atome-ma          #+#    #+#             */
/*   Updated: 2022/10/12 17:15:20 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(const char *str, char delim);
char	**ft_split(char const *s, char c);
void	**ft_free_mem(char **str);
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
	size_t	idx;
	size_t	row;
	int		pos;

	idx = 0;
	pos = -1;
	row = 0;
	if (ft_strlen(s) == 0)
		return (split);
	while (idx <= ft_strlen(s))
	{
		if (s[idx] != c && pos < 0)
			pos = idx;
		else if ((s[idx] == c && pos >= 0) || idx == ft_strlen(s))
		{
			split[row] = ft_substr(s, pos, (idx - pos));
			if (split[row] == 0)
				return (ft_free_mem(split), NULL);
			pos = -1;
			row++;
		}
		idx++;
	}
	return (split);
}

void	**ft_free_mem(char **str)
{
	size_t	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}

/* int	main(void)
{
	const char	*str = "                  olol k l";
	char 	delim = ' ';
	char	**new;
	int		i;

	i = 0;
	printf("%zu", ft_count_words(str, delim));
	new = ft_split(str, delim);
	while (new[i])
	{
		write (1, &new[0][i], 1);
		i++;
	}
	return (0);
} */