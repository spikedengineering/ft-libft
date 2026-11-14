/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:12:27 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/02 19:52:20 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		if (big[i] == little[0] && i + little_len <= len)
			if (ft_strncmp(big + i, little, little_len) == 0)
				return ((char *)big + i);
		i++;
	}
	return (NULL);
}

//#include <stdio.h>
//int	main(void)
//{
//	const char	haystack[21] = "where is the needle?";
//	const char	needle[20] = "needle";
//
//	printf("%s\n", ft_strnstr(haystack, needle, 20));
//}
