/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 21:13:58 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/14 11:30:26 by ajose-al         ###   ########.fr       */
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
	// WARNING: NEEDS MAIN
}
