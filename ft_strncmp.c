/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 22:26:00 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/02 18:34:16 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((unsigned char)s1[i] != '\0'
		&& (unsigned char)s1[i] == (unsigned char)s2[i]
		&& i < n - 1)
		i++;
	if (n <= 0)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

//#include <string.h>
//#include <stdio.h>
//int	main(void)
//{
//	char first[10] = "Alexandre";
//	char second[8] = "Almeida";
//	size_t size = 3;
//
//	printf("%s %s: %d\n", first, second, ft_strncmp(first, second, size));
//	printf("%s %s: %d\n", first, second, strncmp(first, second, size));
//}
