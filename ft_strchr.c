/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 08:02:58 by ajose-al          #+#    #+#             */
/*   Updated: 2026/10/31 21:47:02 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}

//#include <stdio.h>
//int	main(void)
//{
//	char s[12] = "Hello World";
//	char c = 'W';
//	printf("%s: %c\n", s, c);
//	int i = 0;
//	while (i < 12)
//	{
//		printf("address %d: %p\n", i, s + i);
//		i++;
//	}
//	printf("%s: %c\n", s, c);
//	printf("Pointer of Character: %p\n", ft_strchr(s, c));
//}
