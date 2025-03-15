/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:45:42 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/03/03 15:32:31 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/* 
// TEST

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "Hello World !";
	char str2[14];
	char str3[14];
	strncpy(str2, str1, 14);
	str2[13] = '\0';
	printf("Copying in same length string with strncpy : %s\n", str2);
	ft_strncpy(str3, str1, 14);
	str3[13] = '\0';
	printf("Copying in same length string with ft_strncpy : %s\n", str3);

	char str4[10];
	char str5[10];
	strncpy(str4, str1, 9);
	str4[9] = '\0';
	printf("Copying in smaller string with strncpy : %s\n", str4);
	ft_strncpy(str5, str1, 9);
	str5[9] = '\0';
	printf("Copying in smaller string with ft_strncpy : %s\n", str5); 

	char str6[30];
	char str7[30];
	strncpy(str6, str1, 30);
	str6[29] = '\0';
	printf("Copying in bigger string with strncpy : %s\n", str6);
	ft_strncpy(str7, str1, 30);
	str7[29] = '\0';
	printf("Copying in bigger string with ft_strncpy : %s\n", str7);

	return (0);
} */