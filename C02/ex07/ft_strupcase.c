/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:58:51 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/03/03 15:36:14 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/* 
#include <stdio.h>

int main()
{
	char str1[] = "sdkjovnsdaovn";
	
	printf("Before ft_strupcase = \"%s\" \n", str1);
	printf("After ft_strupcase = \"%s\" \n", ft_strupcase(str1));
} */
