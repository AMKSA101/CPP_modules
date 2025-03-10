/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:31:48 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/04 12:56:24 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
		Brain *_brain;
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	virtual ~Dog();
	void makeSound() const;
};

#endif
