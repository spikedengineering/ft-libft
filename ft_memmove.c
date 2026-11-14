/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 02:27:39 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/11 11:45:01 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	buffer[524288];
	size_t			i;
	// WARNING: ALGO NOT CORRECT! WHATS THAT BUFFER?
	i = 0;
	while (i < n)
	{
		buffer[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = buffer[i];
		i++;
	}
	return (dest);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	name[19] = "Alexandre Carvalho";
//
//	printf("name: %s\n", name);
//	ft_memmove(name, name + 10, 4);
//	printf("name: %s\n", name);
//}
