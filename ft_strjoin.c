/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:21:35 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/14 11:28:58 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, s1_len + 1);
	ft_strlcpy(join + s1_len, s2, s2_len + 1);
	return (join);
}

//#include <stdio.h>
//int	main(void)
//{
//	char s1[] = "Hello";
//	char s2[] = " World";
//	char *result = ft_strjoin(s1, s2);
//
//	printf("s1: %p\ns2: %p\nnew: %p\n%s\n", &s1, &s2, &result, result);
//}
