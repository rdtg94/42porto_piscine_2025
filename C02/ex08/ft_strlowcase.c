/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:27:17 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/03/03 15:36:12 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/* 
#include <stdio.h>

int main()
{
	char str1[] = "VSLJNVLW";
	
	printf("Before ft_strlowcase = \"%s\" \n", str1);
	printf("After ft_strlowcase = \"%s\" \n", ft_strlowcase(str1));
} */
