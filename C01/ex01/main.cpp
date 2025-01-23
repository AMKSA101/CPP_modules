/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:39:43 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/23 11:00:50 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie *zombie = zombieHorde(5, "Abdelghani");
	for (int i = 0; i < 5; i++)
		zombie[i].announce();
	delete[] zombie;
	return (0);
}
