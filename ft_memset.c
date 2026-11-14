/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 20:08:56 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/14 10:52:32 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	init_c;
//	char	c;
//	size_t	n;
//	void	*s;
//
//	c = 65;
//	init_c = 0;
//	n = 5;
//	s = &init_c;
//	printf("start: %p\n", s);
//	printf("start value: %d\n", *(unsigned char *)s);
//	ft_memset(s, c, n);
//	printf("end: %p\n", s);
//	printf("end value: %d\n", *(unsigned char *)s);
//}
