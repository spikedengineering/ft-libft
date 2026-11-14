/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 21:48:30 by ajose-al          #+#    #+#             */
/*   Updated: 2026/10/31 22:25:05 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>
//int	main(void)
//{
//	char s[12] = "Hello World";
//	char c = '-';
//	printf("%s: %c\n", s, c);
//	int i = 0;
//	while (i < 12)
//	{
//		printf("address %d: %p\n", i, s + i);
//		i++;
//	}
//	printf("%s: %c\n", s, c);
//	printf("Pointer of Character: %p\n", ft_strrchr(s, c));
//	printf("Pointer of Character: %p\n", strrchr(s, c));
//}
