//
// Created by alejandro on 6/7/19.
//

#ifndef PRACTICA_3_ALEJANDROGH97_SECCION_H
#define PRACTICA_3_ALEJANDROGH97_SECCION_H

#include <map>
#include <fstream>
#include <iostream>
#include <sstream>
class Seccion {
private:
    std::map<std::string, std::string> seccion;
public:
    Seccion(std::string filename) {

        std::ifstream file;
        file.open(filename);

        std::string linea;
        std::string nombre;
        std::string valor;
        std::string instruccion;

        while (getline(file, linea)) {

            std::stringstream ss(linea);
            getline(ss,instruccion,' ');

            if (instruccion == "C") {

                getline(ss, nombre, ' ');
                getline(ss, valor, ' ');
                seccion[nombre] = valor;
            }

            else if (instruccion == "L") {
                getline(ss, nombre, ' ');

                if (nombre == "All") {
                    for (auto const &key: seccion) {
                        std::cout << key.first << " " << key.second << std::endl;
                    }
                }
                else {
                    std::cout << nombre << " " << seccion[nombre]<<std::endl;
                }
            }

            else if (instruccion == "D") {
                getline(ss, nombre, ' ');
                seccion.erase(nombre);

            }
        }


    }

};
#endif //PRACTICA_3_ALEJANDROGH97_SECCION_H
