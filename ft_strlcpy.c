/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 04:59:16 by ajose-al          #+#    #+#             */
/*   Updated: 2026/10/30 08:59:33 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (!size)
		return (src_len);
	i = 0;
	while (i < size - 1 && i < src_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	name[10] = "Alexandre";		// first in stack, second in memory
//	char	surname[9] = "Carvalho";	// after in stack, first in memory
//
//	printf("name: %s\n", name);
//	printf("surname: %s\n", surname);
//	ft_strlcpy(surname, name, 9);
//	printf("name: %s\n", name);
//	printf("surname: %s\n", surname);
//	printf("name address: %p\n", name);
//	printf("surname address: %p\n", surname);
//}
