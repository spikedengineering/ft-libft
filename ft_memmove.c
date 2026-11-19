/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 02:27:39 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/19 19:12:11 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*lastd;
	const char	*lasts;

	if (!dest || !src)
		return (NULL);
	d = dest;
	s = src;
	if (dest < src)
		while (n--)
			*(d++) = *(s++);
	else
	{
		lastd = d + (n - 1);
		lasts = s + (n - 1);
		while (n--)
		{
			*(lastd--) = *(lasts--);
		}
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
