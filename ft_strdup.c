/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 22:19:05 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/14 11:32:22 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		str_len;
	int		i;
	char	*dup;

	str_len = ft_strlen(s);
	dup = malloc((str_len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < str_len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	str[5] = "Test";
//	char	*dup = ft_strdup(str);
//	printf("[ft_strdup]\nstr: %p: %s\ndup: %p: %s\n", &str, str, &dup, dup);
//}
