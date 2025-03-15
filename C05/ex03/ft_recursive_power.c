/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 06:33:24 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/03/09 15:22:01 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/* #include <stdio.h>

int	main(void)
{
	printf("2^3: %d\n", ft_recursive_power(2, 3));
	printf("5^0: %d\n", ft_recursive_power(5, 0));
	printf("0^0: %d\n", ft_recursive_power(0, 0));
	printf("3^-2: %d\n", ft_recursive_power(3, -2));
	return (0);
}
*/