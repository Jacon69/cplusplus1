/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:43:38 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/02/02 07:52:56 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>  // Para exit() y 
#include <cstdlib>  // Para atoi()
#include <cctype>   // Para isdigit()



bool esNum(const std::string num){
  for (size_t i = 0; i< num.length();(i++)){
    if (!isdigit(num[i])){
      return false;
    }
  }
  return true;
}
int main(int argc, char **argv){
  if (argc!=3){
    std::cerr << "Se necesita 2 nombre para la orda y nº de zombis";
  }
  if (!esNum(argv[1])){
    std::cerr << "Tiene que ser un num entero positivo de zombis";
  }
    // ✅ Convertir `argv[1]` a int con `atoi()`
    int N = atoi(argv[1]);

    Zombie* horda = zombieHorde(  N, argv[2] );  //Aqui creo la horda
    for (size_t i = 0; (int)i < N; i++)
    {
      horda[i].announce() ;
    }
    delete[] horda;                   //Aqui la destruyo
    

}

