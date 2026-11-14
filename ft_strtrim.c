/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:48:05 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/11 11:44:23 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_char_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_char_in_set(s1[end - 1], set))
		end--;
	trim = ft_calloc(sizeof(char), end - start + 1);
	if (!trim)
		return (NULL);
	i = 0;
	while (i < end - start)
	{
		trim[i] = s1[start + i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}

//#include <stdio.h>
//int	main(void)
//{
//	char name[] = "abc i abc";
//	char trim[] = "cba";
//	printf("%s\n", ft_strtrim(name, trim));
//}
