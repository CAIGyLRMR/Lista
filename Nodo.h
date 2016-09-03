//
//  Nodo.h
//  ListaFinalHecha
//
//  Created by Claudio Ibáñez Garduño on 01/09/16.
//  Copyright (c) 2016 Claudio Ibáñez Garduño. All rights reserved.
//

//#ifndef __ListaFinalHecha__Nodo__
//#define __ListaFinalHecha__Nodo__


#include <iostream>

class Nodo
{
private:
    int Dato;
    Nodo* Sig;
public:
    Nodo(int Dato, Nodo* Sig);
    Nodo(int Dato);
    void setDato(int Dato);
    void setSig(Nodo* Sig);
    int getDato();
    Nodo* getSig();
    //~Nodo();
};