/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 07:30:22 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/20 22:43:28 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	size_t	ii;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	i = dst_len;
	ii = 0;
	if (size <= dst_len)
		return (src_len + size);
	while (i < size - 1 && ii < src_len)
	{
		dst[i] = src[ii];
		i++;
		ii++;
	}
	dst[i] = '\0';
	if (size <= dst_len)
		return (src_len + size);
	return (src_len + dst_len);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	name[10] = "Alexandre";
//	char	surname[9] = "Carvalho";
//
//	printf("name: %s\n", name);
//	printf("surname: %s\n", surname);
//	ft_strlcat(surname, name, 9);
//	printf("name: %s\n", name);
//	printf("surname: %s\n", surname);
//	printf("name address: %p\n", name);
//	printf("surname address: %p\n", surname);
//}
