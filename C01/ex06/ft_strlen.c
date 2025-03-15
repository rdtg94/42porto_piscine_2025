/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:20:31 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/02/27 08:45:11 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
// TEST
#include <stdio.h>

int	main(void)
{
	char	*str = "Amanha tenho jogo!";

	printf("The lenght of the string %s is %d\n", str, ft_strlen(str));
	return (0);
}
*/
