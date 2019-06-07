#include <iostream>
#include <deque>
#include "matrices.h"
#include "dequeTest.h"
#include "seccion.h"
#include <fstream>

int main() {
    matrices m1(3,3);

    for(int row = 0;row<3;row++){
        for(int column = 0; column<3;column++) {
            m1.llenarMatriz(row,column);
        }
    }


    matrices m2(3,3);

    for(int row = 0;row<3;row++){
        for(int column = 0; column<3;column++) {
            m2.llenarMatriz(row,column);
        }
    }

    int** m3 = m1 + m2;

    for(int row = 0;row<3;row++){
        for(int column = 0; column<3;column++){
            std::cout<<m3[row][column]<<" ";
        }
        std::cout<<std::endl;
    }


    std::deque<int> dequeTest = {4,7,8,5,3,2,8,1};
    int n = 3;
    std::deque<int> dequeRespuesta = menores(dequeTest,n);

    for(auto num:dequeRespuesta){
        std::cout<<num<<" ";
    }
    std::cout<<"\n";

    Seccion miSeccion("test.txt");

}