//
// Created by alejandro on 6/7/19.
//

#ifndef PRACTICA_3_ALEJANDROGH97_DEQUETEST_H
#define PRACTICA_3_ALEJANDROGH97_DEQUETEST_H

#include <deque>

template <typename T>
std::deque<T> menores(std::deque<T> deque1, int n){

    auto it = deque1.begin();
    std::deque<T> respuesta;
    T temp_min;

    while(it+n-1!=deque1.end()){

        temp_min = *it;

        for(int index_datos = 1;index_datos<n;index_datos++){
            if(*(it+index_datos)<temp_min){
                temp_min=*(it+index_datos);
            }
        }
        respuesta.push_back(temp_min);
        it++;
    }
    return respuesta;
}



#endif //PRACTICA_3_ALEJANDROGH97_DEQUETEST_H
