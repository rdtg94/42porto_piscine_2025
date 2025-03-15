/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:10:10 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/03/09 15:03:30 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	i = 0;
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

/* #include <stdio.h>

int	main(void)
{
	printf("2^3: %d\n", ft_iterative_power(2, 3));
	printf("5^0: %d\n", ft_iterative_power(5, 0));
	printf("0^0: %d\n", ft_iterative_power(0, 0));
	printf("3^-2: %d\n", ft_iterative_power(3, -2));
	return (0);
} */