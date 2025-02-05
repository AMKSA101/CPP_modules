/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:32:49 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/05 12:08:14 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	std::cout << "======================================================="<< std::endl;

	Character* original = new Character("Original");
	Character* copy = new Character(*original);
	Character* assigned = new Character("Assigned");
	copy->equip(new Ice());
	copy->equip(new Cure()); 
	assigned->equip(new Ice());
	assigned->equip(new Cure());
	
	delete original;

	copy->use(0, *assigned);
	assigned->use(1, *copy);

	delete copy;
	delete assigned;
	std::cout << "======================================================="<< std::endl;

	MateriaSource* ms = new MateriaSource();
	ms->learnMateria(new Ice());
	AMateria* unknown = ms->createMateria("fire");
	if (unknown == NULL) {
		std::cout << "Creating unknown Materia returned nullptr (correct)." << std::endl;
	}
	
	delete ms;
	std::cout << "======================================================="<< std::endl;

	IMateriaSource* src2 = new MateriaSource();
	for (int i = 0; i < 6 ; i++)
		src2->learnMateria(new Ice());

	delete src2;
	return 0;
}
