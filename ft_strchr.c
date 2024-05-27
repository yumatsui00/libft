/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:28:10 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/17 17:09:14 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

// #include <string.h>
// int main()
// {
// 	const char *s1 = "yuigauhg";
// 	const char *s2 = "yuigauhg";
// 	char *str;
// 	char *ans;
// 	char l = 'i';
// 	printf("before = %s\n", s1);
// 	str = ft_strchr(s1, l + 256);
// 	ans = strchr(s2, l + 256);
// 	printf("after  = %s\n", str);
// 	printf("answer = %s\n", ans);

// 	printf("before = %c\n", 'i');
// 	printf("after  = %c\n", 'i' + 256);
// }