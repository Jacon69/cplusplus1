#include "Weapon.hpp"



Weapon::Weapon(): type(""){}

Weapon::Weapon(std::string type): type(type){}

Weapon::~Weapon()
{
	std::cerr << "DEBUG " << "el arma " << type << " ha sido destruida 💀" << std::endl;
}

std::string Weapon::getType()const {
	return type;
}

void	Weapon::setType(std::string newType){
	type = newType;
}
