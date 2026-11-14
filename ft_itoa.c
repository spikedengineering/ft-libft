/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:46:16 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/12 15:27:00 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numsign(int n)
{
	int		sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	return (sign);
}

char	*filla(int n, char *a, size_t num_len, long calc)
{
	int		sign;
	size_t	i;
	long	num;

	sign = numsign(n);
	num = ((long)n * sign);
	i = 0;
	if (sign == -1)
	{
		a[i] = '-';
		i++;
	}
	while (i < num_len && calc)
	{
		calc /= 10;
		a[i] = '0' + ((num / calc) % 10);
		i++;
	}
	a[i] = '\0';
	return (a);
}

char	*ft_itoa(int n)
{
	int		sign;
	long	calc;
	size_t	num_len;
	long	num;
	char	*a;

	sign = numsign(n);
	num = ((long)n * sign);
	num_len = 1;
	calc = 10;
	while (num / calc > 0)
	{
		num_len++;
		calc *= 10;
	}
	if (sign == -1)
		num_len++;
	a = ft_calloc(sizeof(char), num_len + 1);
	if (!a)
		return (NULL);
	return (filla(n, a, num_len, calc));
}

//#include <stdio.h>
//int main(void)
//{
//	char *a;
//	a = ft_itoa(-2147483648);
//	printf("%s\n", a);
//	free(a);
//	a = ft_itoa(2147483647);
//	printf("%s\n", a);
//	free(a);
//	a = ft_itoa(0);
//	printf("%s\n", a);
//	free(a);
//	a = ft_itoa(-1);
//	printf("%s\n", a);
//	free(a);
//	a = ft_itoa(1);
//	printf("%s\n", a);
//	free(a);
//}
