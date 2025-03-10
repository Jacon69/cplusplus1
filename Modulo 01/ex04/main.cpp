/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimecondea <jaimecondea@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:57:48 by jaimecondea       #+#    #+#             */
/*   Updated: 2025/02/05 08:30:41 by jaimecondea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>


int main(int argc, char **argv){ //recibe 3 param :nombre de un archivo
	if (argc !=4){					// S1 cadena buscar  , S2 Cadena Sustituir
		std::cerr << "parametros erroneos" << std::endl;
		return(1);
	}
	std::string file = argv [1];
	std::string s1 = argv[2];
    std::string s2 = argv[3];
	std::string file2 = file + ".replace";
	if (s1.empty()) {
    	std::cerr << "Error: La cadena a reemplazar (s1) no puede estar vacía.\n";
   		return 1;
	}

	std::ifstream inputFile(argv [1]); // Intentamos abrir el archivo Aqui uso la clase std::ifstream de la librerí <fstream>
								//instancio en inputFile la clase de manera que tengo un objeto de esta clase llamado inputFile	
    if (!inputFile) { // Si no se pudo abrir
        std::cerr << "Error: No se pudo abrir el archivo '" << file << "'\n";
        return 1;
    }
	// Abrir el archivo de salida
    std::ofstream outputFile(file2.c_str()); 
    /* aquí creo el objeto outputFile de la clase std::ofstream.  
    El argumento que le paso es un const char* para ello uso el metodo .c_str()de la clase std::string
     en el objeto file2 que nos devuelve el nombre del archivo como const char* */
    if (!outputFile) {
        std::cerr << "Error: No se pudo crear el archivo '" << file2 << "'\n";
        inputFile.close();
        return 1;
    }
 std::string line; // Aquí voy a copiar linea linea lo que hay en el archivo
    while (std::getline(inputFile, line)) { // Leer línea por línea
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) { // Buscar `s1`
            line.erase(pos, s1.length()); // Eliminar `s1`
            line.insert(pos, s2); // Insertar `s2`
            pos += s2.length(); // Mover el índice después de `s2`
        }
        outputFile << line << '\n'; // Escribir línea modificada en `file2`
    }

	inputFile.close();
	outputFile.close();
	return 0;

}