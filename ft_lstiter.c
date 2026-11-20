/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 08:30:38 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/20 22:39:12 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}

//#include "visualizer/visualizer.h"
//#include <stdio.h>
//static void	ft_f(void *content)
//{
//	printf("%p\n", content);
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
//	ft_visualizelst(lst);
//	ft_lstiter(lst, ft_f);
//}
