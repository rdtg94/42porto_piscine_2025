/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:56:02 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/03/05 11:57:17 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}

/* #include <stdio.h>
int	main()
{
	char str1[20] = "Hello World";
	char str2[20] = "42Porto Piscine";
	
	printf("Number of characters: %d\n", ft_strlen(str1));
	printf("Number of characters: %d\n", ft_strlen(str2));
} */