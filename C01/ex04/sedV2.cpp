/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedV2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:18:04 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/23 13:09:14 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedV2.hpp"
#include <fstream>
#include <cstdlib>


sedV2::sedV2(std::string toReplace, std::string replaceWith): toReplace(toReplace), replaceWith(replaceWith){}

void sedV2::replace(std::string &str){
	std::string line;
	size_t pos = 0;
	size_t len = toReplace.length();
	std::ifstream fileIn(str.c_str());
	if (!fileIn.is_open() || fileIn.fail()){
		std::cerr <<RED<<BOLD<< "Error: could not open file" << std::endl;
		exit(1);
	}
	fileIn.seekg(0, std::ios::end);
	if (fileIn.tellg() == 0) {
		std::cerr <<RED<<BOLD<< "Error: file is empty" << std::endl;
		exit(1);
	}
	fileIn.seekg(0, std::ios::beg);
	std::ofstream fileOut((str + ".replace").c_str());
	if (!fileOut.is_open()){
		std::cerr <<RED<<BOLD<< "Error: could not create file" << std::endl;
		exit(1);
	}
	while (std::getline(fileIn, line)){
		pos = 0;
		while ((pos = line.find(toReplace, pos)) != std::string::npos){
			line.replace(pos, len, replaceWith);
			pos += len;
		}
		fileOut << line << std::endl;
	}
}

sedV2::~sedV2(){}
