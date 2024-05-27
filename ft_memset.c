/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:31:03 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/21 17:19:56 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ub;

	ub = (unsigned char *)b;
	while (len-- > 0)
		*ub++ = c;
	return (b);
}

// int main()
// {
// 	// char *test[10];
// 	char test1[10];
// 	// printf("before = %s\n", test);
// 	// printf("after  = %s\n", ft_memset(test, 3, 5));
// 	memset(test1, 3, 5);
// 	for (int i = 0; i < 5; i++)
// 		printf("answer = %c\n", test1[i]);
// }
