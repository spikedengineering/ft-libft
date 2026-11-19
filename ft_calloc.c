/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 21:13:58 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/18 18:25:28 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_alloc;
	void	*alloc;

	total_alloc = nmemb * size;
	if ((nmemb && total_alloc / nmemb != size) || total_alloc < 0)
		return (NULL);
	alloc = malloc(total_alloc);
	if (!alloc)
		return (NULL);
	if (total_alloc > 0)
		ft_bzero(alloc, total_alloc);
	return (alloc);
}

//int	main(void)
//{
//	char *s = "Alexandre Carvalho";
//	unsigned int str_len = ft_strlen(s) + 1;
//	char *alloc = ft_calloc(str_len, sizeof(char));
//	ft_strlcpy(alloc, s, str_len);
//	ft_putstr_fd(s, 1);
//	ft_putstr_fd("\n", 1);
//	ft_putstr_fd(alloc, 1);
//	free(alloc);
//	ft_putstr_fd(alloc, 1);
//}
