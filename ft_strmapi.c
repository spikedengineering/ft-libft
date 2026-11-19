/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:49:21 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/18 18:44:28 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		str_len;
	int		i;

	if (!s || !f)
		return (NULL);
	str_len = ft_strlen(s);
	new = ft_calloc(str_len + 1, sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < str_len)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

//char	f(unsigned int i, char c)
//{
//	(void)i;
//	if (c >= 'a' && c <= 'z')
//		return (c - 32);
//	return (c);
//}
//
//int	main(void)
//{
//	char *s = "Alexandre Carvalho";
//	char *alloc = ft_strmapi(s, f);
//
//	ft_putstr_fd(s, 1);
//	ft_putstr_fd("\n", 1);
//	ft_putstr_fd(alloc, 1);
//	ft_putstr_fd("\n", 1);
//	free(alloc);
//	ft_putstr_fd(alloc, 1);
//}
