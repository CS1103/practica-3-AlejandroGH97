//
// Created by alejandro on 6/7/19.
//

#ifndef PRACTICA_3_ALEJANDROGH97_MATRICES_H
#define PRACTICA_3_ALEJANDROGH97_MATRICES_H

#include <vector>
#include <iostream>

class matrices{
private:
    int n;
    int m;
    int** matriz;
public:

    matrices(int n, int m):n{n},m{m}{
        matriz = new int*[n];
        for(int row = 0;row<n;row++){
        matriz[row]=new int[m];
        }

        for(int row = 0;row<n;row++){
            for(int column = 0; column<n;column++) {
                matriz[row][column]=0;
            }
        }
    }

    void llenarMatriz(int _n, int _m){
        if(_n<n && _n >= 0 && _m<m && _m >= 0) {
            std::cin >> matriz[_n][_m];
        }
            }


    int** operator+(const matrices rhs){
        if(this->n==rhs.n && this->m==rhs.m){

            int** respuesta = new int*[n];
            for(int row = 0;row<n;row++){
                respuesta[row]=new int[m];
            }

            for(int row = 0;row<n;row++){
                for(int column = 0; column<m;column++){
                    respuesta[row][column]=this->matriz[row][column]+rhs.matriz[row][column];
                }
            }
            return respuesta;

        }
        else{
            return new int*;
        }
    };
};
#endif //PRACTICA_3_ALEJANDROGH97_MATRICES_H
