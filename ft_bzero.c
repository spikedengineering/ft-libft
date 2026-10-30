/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 22:29:10 by ajose-al          #+#    #+#             */
/*   Updated: 2026/10/30 07:46:12 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char) '\0';
		i++;
	}
}

//#include <stdio.h>
//int	main(void)
//{
//	char	name[10] = "Alexandre";
//
//	printf("%s\n", name);
//	ft_bzero(name, 5);
//	printf("%s\n", name);
//}
