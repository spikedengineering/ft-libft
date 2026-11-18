/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 23:39:49 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/18 17:52:10 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	getarraysize(char const *s, char c)
{
	unsigned int	i;
	unsigned int	arr_size;

	arr_size = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c && i == 0) || (s[i] == c
				&& s[i + 1] != c && s[i + 1] != '\0'))
			arr_size++;
		i++;
	}
	return (arr_size);
}

static unsigned int	wordlen(char const *s, char terminator)
{
	unsigned int	i;

	i = 0;
	while (s[i] && s[i] != terminator)
		i++;
	return (i);
}

static void	freeprevious(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	**splitengine(char const *s, char **array, char c)
{
	char			**array_init;
	unsigned int	i;
	char			*str;

	array_init = array;
	i = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (i > 0 && s[i] != c && s[i - 1] == c))
		{
			str = ft_substr(s, i, wordlen(s + i, c));
			if (!str)
			{
				freeprevious(array_init);
				return (NULL);
			}
			*array = str;
			array++;
		}
		i++;
	}
	array = NULL;
	return (array_init);
}

char	**ft_split(char const *s, char c)
{
	char			**array;

	if (!s)
		return (NULL);
	array = ft_calloc(getarraysize(s, c) + 1, sizeof(void *));
	if (!array)
		return (NULL);
	return (splitengine(s, array, c));
}

//#include <stdio.h>
//int	main(void)
//{
//	char	**array;
//	int		i;
//
//	array = ft_split("hello! world", ' ');
//	i = 0;
//	while (array[i])
//	{
//		printf("%s\n", array[i]);
//		i++;
//	}
//}
