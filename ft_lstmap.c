/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 08:50:00 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/16 15:00:46 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new;
	t_list	*first_new;
	t_list	*previous_new;

	if (!lst || !f || !del)
		return (NULL);
	first_new = NULL;
	current = lst;
	while (current)
	{
		new = ft_lstnew(f(current->content));
		if (!new)
		{
			if (first_new)
				ft_lstclear(&first_new, del);
			return (NULL);
		}
		if (!first_new)
			first_new = new;
		else
			previous_new->next = new;
		previous_new = new;
		current = current->next;
	}
	return (first_new);
}

//#include "visualizer/visualizer.h"
//#include <stdio.h>
//char	ft_toupper_map(unsigned int i, char c)
//{
//	(void)i;
//	if (c >= 'a' && c <= 'z')
//		return (c - 32);
//	return (c);
//}
//static void	*ft_f(void *content)
//{
//	return (ft_strmapi(content, ft_toupper_map));
//}
//static void	ft_del(void *content)
//{
//	free(content);
//}
//int	main(void)
//{
//	t_list	*lst;
//	char	*str0;
//	char	*str1;
//	char	*str2;
//
//	str0 = ft_strdup("hello");
//	lst = ft_lstnew(str0);
//	str1 = ft_strdup("world");
//	lst->next = ft_lstnew(str1);
//	str2 = ft_strdup("my name is");
//	lst->next->next = ft_lstnew(str2);
//	ft_putstr("ORIGINAL:\n");
//	ft_visualizelst(lst);
//	ft_putstr("MAPPED:\n");
//	ft_visualizelst(ft_lstmap(lst, ft_f, ft_del));
//}
