/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 07:30:22 by ajose-al          #+#    #+#             */
/*   Updated: 2026/10/30 10:23:57 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dst_len = ft_strlen(dst);
	i = dst_len;
	while (i < size && i < src_len)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dst_len)
		dst[i] = '\0';
	return (src_len + dst_len);
}
