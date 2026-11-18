/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 08:50:00 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/18 18:14:39 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first_new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	first_new = NULL;
	while (lst)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&first_new, del);
			return (NULL);
		}
		if (!first_new)
			first_new = new;
		else
			ft_lstadd_back(&first_new, new);
		lst = lst->next;
	}
	return (first_new);
}

//void	ft_putstr(char *str)
//{
//	int	i;
//
//	i = 0;
//	while (str[i] != '\0')
//	{
//		write(1, &str[i], 1);
//		i++;
//	}
//}
//
//static int	ft_prepend0x0(char *hexstr, int i)
//{
//	int	ii;
//
//	ii = 0;
//	hexstr[ii++] = '0';
//	hexstr[ii++] = 'x';
//	while (ii + i < 14)
//		hexstr[ii++] = '0';
//	return (ii);
//}
//
//char	*ft_dectohexstr(int decimal)
//{
//	char	character;
//	int		remainders[8];
//	int		i;
//	int		ii;
//	char	*hexstr;
//
//	hexstr = ft_calloc(15, sizeof(char));
//	if (!hexstr)
//		return (NULL);
//	i = 0;
//	while (decimal > 0)
//	{
//		remainders[i] = ((((double)decimal / 16.0) - (decimal / 16)) * 16);
//		decimal /= 16;
//		i++;
//	}
//	ii = ft_prepend0x0(hexstr, i);
//	while (i > 0)
//	{
//		i--;
//		character = "0123456789abcdef"[remainders[i]];
//		hexstr[ii++] = character;
//	}
//	return (hexstr);
//}
//
//static void	ft_putstroversize(char *str)
//{
//	char	*newstr;
//
//	newstr = ft_calloc(15, sizeof(char));
//	ft_memcpy(newstr, str, 15);
//	newstr[11] = '.';
//	newstr[12] = '.';
//	newstr[13] = '.';
//	newstr[14] = '\0';
//	write(1, &newstr, 14);
//	free(newstr);
//}
//
//void	ft_putstrncenter(char *str)
//{
//	size_t	str_len;
//	size_t	i;
//
//	str_len = ft_strlen(str);
//	if (str_len >= 14)
//	{
//		ft_putstroversize(str);
//		return ;
//	}
//	else
//	{
//		i = 0;
//		while (i < (14 - str_len) / 2)
//		{
//			write(1, " ", 1);
//			i++;
//		}
//		ft_putstr(str);
//		i += str_len;
//		while (i < 14)
//		{
//			ft_putstr(" ");
//			i++;
//		}
//	}
//}
//
//void	ft_nodeconstruct0(t_list *lst, int is_first, char *hex_str)
//{
//	if (!lst)
//	{
//		ft_putstr("ERROR: lst is NULL\n");
//		return ;
//	}
//	if (is_first)
//		ft_putstr("┌──────────────────────┐\n");
//	else
//		ft_putstr("┌───────────V──────────┐\n");
//	hex_str = ft_dectohexstr((long)lst);
//	ft_putstr("│    ");
//	ft_putstr(hex_str);
//	ft_putstr("    │\n");
//	free(hex_str);
//	ft_putstr("├──────────────────────┤\n");
//	ft_putstr("│       CONTENT        │\n");
//	ft_putstr("│  ┌────────────────┐  │\n");
//}
//
//void	ft_nodeconstruct1(t_list *lst, char *hex_str)
//{
//	if (lst->content)
//	{
//		hex_str = ft_dectohexstr((long)lst->content);
//		ft_putstr("│  │ ");
//		ft_putstr(hex_str);
//		ft_putstr(" ───────────────────────┐\n");
//		free(hex_str);
//	}
//	else
//		ft_putstr("│  │      NULL      │  │\n");
//	ft_putstr("│  └────────────────┘  │");
//	if (lst->content)
//		ft_putstr("                   │");
//	ft_putstr("\n");
//	ft_putstr("│                      │");
//	if (lst->content)
//		ft_putstr("        ┌──────────V───────────┐");
//	ft_putstr("\n");
//	ft_putstr("│         NEXT         │");
//}
//
//void	ft_nodeconstruct2(t_list *lst, char *hex_str)
//{
//	if (lst->content)
//	{
//		hex_str = ft_dectohexstr((long)lst->content);
//		ft_putstr("        │    ");
//		ft_putstr(hex_str);
//		ft_putstr("    │");
//		free(hex_str);
//	}
//	ft_putstr("\n");
//	ft_putstr("│  ┌────────────────┐  │");
//	if (lst->content)
//		ft_putstr("        ├──────────────────────┤");
//	ft_putstr("\n");
//	if (lst->next)
//	{
//		hex_str = ft_dectohexstr((long)lst->next);
//		ft_putstr("│  │ ");
//		ft_putstr(hex_str);
//		ft_putstr(" ");
//		free(hex_str);
//	}
//	else
//		ft_putstr("│  │      NULL      ");
//}
//
//void	ft_nodeconstruct3(t_list *lst)
//{
//	if (lst->next)
//		ft_putstr("───────┐    ");
//	else
//		ft_putstr("│  │        ");
//	if (lst->content)
//		ft_putstr("│      AS CHARS        │");
//	ft_putstr("\n");
//	ft_putstr("│  └────────────────┘  │");
//	if (lst->next)
//		ft_putstr("   │    ");
//	else
//		ft_putstr("        ");
//	if (lst->content)
//		ft_putstr("│  ┌────────────────┐  │");
//	ft_putstr("\n");
//	ft_putstr("└──────────────────────┘");
//	if (lst->next)
//		ft_putstr("   │    ");
//	else
//		ft_putstr("        ");
//}
//
//void	ft_nodeconstruct4(t_list *lst)
//{
//	if (lst->content)
//	{
//		ft_putstr("│  │ ");
//		ft_putstrncenter(lst->content);
//		ft_putstr(" │  │");
//	}
//	ft_putstr("\n");
//	if (lst->next)
//		ft_putstr("                           │    ");
//	else
//		ft_putstr("                                ");
//	if (lst->content)
//		ft_putstr("│  └────────────────┘  │");
//	ft_putstr("\n");
//	if (lst->next)
//		ft_putstr("            ┌──────────────┘    ");
//	else
//		ft_putstr("                                ");
//	if (lst->content)
//		ft_putstr("└──────────────────────┘");
//	ft_putstr("\n");
//	if (lst->next)
//		ft_putstr("            │");
//	ft_putstr("\n");
//}
//
//void	ft_visualizenode(t_list *lst, int is_first)
//{
//	char	*hex_str;
//
//	hex_str = NULL;
//	ft_nodeconstruct0(lst, is_first, hex_str);
//	ft_nodeconstruct1(lst, hex_str);
//	ft_nodeconstruct2(lst, hex_str);
//	ft_nodeconstruct3(lst);
//	ft_nodeconstruct4(lst);
//}
//
//void	ft_visualizelst(t_list *lst)
//{
//	t_list	*current;
//	int		is_first;
//
//	is_first = 1;
//	current = lst;
//	while (current)
//	{
//		ft_visualizenode(current, is_first);
//		if (is_first)
//			is_first = 0;
//		current = current->next;
//	}
//}
//
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
