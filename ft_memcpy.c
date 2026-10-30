/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 23:41:52 by ajose-al          #+#    #+#             */
/*   Updated: 2026/10/30 07:46:40 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	name[10] = "Alexandre";
//	char	surname[9] = "Carvalho";
//
//	printf("name: %s\n", name);
//	printf("surname: %s\n", surname);
//	ft_memcpy(name, surname, 4);
//	printf("name: %s\n", name);
//	printf("surname: %s\n", surname);
//}
