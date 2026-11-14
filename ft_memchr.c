/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:37:10 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/02 18:53:22 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>
//int	main(void)
//{
//	char s[12] = "Hello World";
//	char c = 'o';
//	printf("%s: %c\n", s, c);
//	int i = 0;
//	while (i < 12)
//	{
//		printf("address %d: %p\n", i, s + i);
//		i++;
//	}
//	printf("%s: %c\n", s, c);
//	printf("ft_memchr: %p\n", ft_memchr(s, c, 11));
//	printf("memchr: %p\n", memchr(s, c, 11));
//}
