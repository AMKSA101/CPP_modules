/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:27:40 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/04 11:26:18 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
	std::cout << "Cat paramitric constructor" << std::endl;
}

Cat::Cat(const Cat &other) {
	std::cout << "Cat copy constructor" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow Meow!!" << std::endl;
}
