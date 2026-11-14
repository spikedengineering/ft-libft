/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 22:38:18 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/11 11:31:08 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	alloc_size;
	char	*str_to_cpy;

	if (!s)
		return (NULL);
	str_to_cpy = (char *)s + start;
	if (ft_strlen(s) < start)
	{
		alloc_size = 1;
		str_to_cpy = "";
	}
	else
		alloc_size = ft_strlen(s + start) + 1;
	if (alloc_size > len)
		alloc_size = len + 1;
	sub = ft_calloc(alloc_size, sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, str_to_cpy, alloc_size);
	return (sub);
	// WARNING: NEEDS MAIN
}
