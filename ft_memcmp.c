/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:54:41 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/02 19:11:35 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		diff;

	diff = 0;
	i = 0;
	while (i < n)
	{
		diff = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			break ;
		i++;
	}
	return (diff);
}
