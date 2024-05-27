/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:45:02 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/18 21:32:22 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	c = (char)c;
	last = NULL;
	while (*s)
	{
		if (*s == c)
			last = (char *)s;
		s++;
	}
	if (*s == c)
		last = (char *)s;
	return (last);
}

// int main()
// {
// 	const char *s1 = "yuigauhg";
// 	const char *s2 = "yuigauhg";
// 	char *str;
// 	char *ans;
// 	char l = 'u';
// 	printf("before = %s\n", s1);
// 	str = ft_strrchr(s1, l);
// 	ans = strrchr(s2, l);
// 	printf("after  = %s\n", str);
// 	printf("answer = %s\n", ans);
// }