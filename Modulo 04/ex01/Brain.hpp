
#pragma once

#include <string>
#include <iostream>

using std::endl;
using std::cin;
using std::cout;
using std::cerr;
using std::string;

class Brain {
private:
	string ideas[100];  // Un array de ideas

public:
	Brain();
	Brain(const Brain& other);  // Constructor de copia
	~Brain();

	Brain& operator=(const Brain& other);  // Operador de asignación
};